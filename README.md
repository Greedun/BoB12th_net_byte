# BoB12th_net_byte
바이트값 변환 응용과제

"
[본문 예제]
syntax : add-nbo <file1> <file2>
sample : add-nbo a.bin b.bin

# example
$ echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin
$ echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin
$ ./add-nbo thousand.bin five-hundred.bin
1000(0x3e8) + 500(0x1f4) = 1500(0x5dc)
"
