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
        dis = idc.GetDisasm(offset)
        if dis.startswith("mov"):
            pts = dis[len("mov     "):].split(',')
            #print(pts)
            addr = idc.get_name_ea_simple(pts[0])
            newname = "_"+pts[1][len(" offset "):]
            print(hex(addr))
            print(newname)
            rename_function(addr, newname)
        offset += 0xA

def main():
    tbls = [
            (0x00EAC450, 0x00EAC6DC)
           ]
    print("Running")
    
    for tbl in tbls:
        rename_tbl(tbl[0], tbl[1])
if __name__ == "__main__":
    main()