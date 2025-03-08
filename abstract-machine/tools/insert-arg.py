#!/usr/bin/env python3

from sys import argv

bin = argv[1]
max_len = int(argv[2])
placeholder = argv[3]
mainargs = argv[4]

if len(mainargs) >= max_len:
    print("Error: mainargs should not be longer than {0} bytes\n".format( max_len))
    exit(1)
print("mainargs={0}".format(mainargs))

fp = open(bin, 'r+b')
data = fp.read()
idx = data.find(str.encode(placeholder))
print(f"idx: {idx}")
if idx == -1:
    print("Error: placeholder not found!\n")
    exit(1)
fp.seek(idx)
mainargs_pad = str.encode(mainargs)+ ((max_len - len(mainargs)) * str.encode("\0"))
if len(mainargs_pad) != max_len:
    print("Error: len(mainargs_pad) != max_len\n")
    exit(1)
written_bytes = fp.write(mainargs_pad)
if written_bytes != len(mainargs_pad):
    print(f"Error: Only {written_bytes} bytes were written, expected {len(mainargs_pad)}")
    exit(1)
print(f"{written_bytes}")
fp.close()
