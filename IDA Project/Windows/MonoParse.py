import idc
import idaapi

import struct

def rename_function(ea, name):
    idc.set_name(ea, name, idaapi.SN_CHECK)

def read_uint32(addr):
    return struct.unpack("<I", idc.get_bytes(addr, 4))[0]

def read_cstring(addr, max_len=0):
    s = ""
    ea = addr
    while True:
        c = idc.get_wide_byte(ea)
        if c == 0:
            break
        ea += 1
        s += chr(c)
        if max_len and len(s) > max_len:
            break
    return s
    
def toCppName(csName):
    cppName = csName.replace(".", "::")
    return cppName.split("(")[0]

def rename_tbl(tbl_start, tbl_end):
    
    # run over the thing
    offset = tbl_start

    while offset < tbl_end:
        name_ptr = read_cstring(read_uint32(offset))
        offset += 4
        function_ptr = read_uint32(offset)
        offset += 4
        
        cppName = toCppName(name_ptr)
        rename_function(function_ptr, cppName)



def main():
    tbls = [
            (0x00B9C180, 0x00B9C1F0),
            (0x00B9C1F8, 0x00B9C290),
            (0x00B9C298, 0x00B9C2B8),
            (0x00B9C2C0, 0x00B9C3A0),
            (0x00B9C3A8, 0x00B9C3C8),
            (0x00B9C3D0, 0x00B9C510),
            (0x00B9C518, 0x00B9C758),
            (0x00B9C760, 0x00B9C890)
           ]
    print("Running")
    
    for tbl in tbls:
        rename_tbl(tbl[0], tbl[1])
if __name__ == "__main__":
    main()