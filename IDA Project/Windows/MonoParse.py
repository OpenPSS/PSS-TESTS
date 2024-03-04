import idc
import ida_bytes
import idaapi
import ida_offset
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

def rename_tbl(tbl_start):
    
    # run over the thing
    offset = tbl_start

    while True:
        nameptr = idc.get_wide_dword(offset)
        funptr = idc.get_wide_dword(offset+4)

        if nameptr == 0:
            break
        if funptr == 0:
            break
        
        name = read_cstring(nameptr)

#        thumbReg = funptr & 1
#        funptr -= thumbReg
#        for i in range(4):
#            idc.split_sreg_range(funptr + i, "T", thumbReg, SR_user)
        
        idaapi.ida_funcs.add_func(funptr, idc.BADADDR)
        rename_function(funptr, toCppName(name))
        ida_bytes.create_strlit(nameptr, 0, ida_nalt.STRTYPE_TERMCHR)
        
        
        #ida_bytes.create_data(offset, FF_DWORD, 4, ida_idaapi.BADADDR)
        #ida_bytes.create_data(offset+4, FF_DWORD, 4, ida_idaapi.BADADDR)
        ida_offset.op_plain_offset(offset, 1, 0)
        ida_offset.op_plain_offset(offset+4, 1, 0)
        
        
        
        print(name)
        print(funptr)

        offset += 8
def main():
    tbls = [
            0x810DDF04,
            0x810DE104,
            0x810DE12C,
            0x810DE1D0,
            0x810DE458,
            0x810DE5A0,
            0x810DE5B4,
            0x810DE69C,
            0x810DE6E8
           ]
    print("Running")
    
    for tbl in tbls:
        rename_tbl(tbl)
if __name__ == "__main__":
    main()