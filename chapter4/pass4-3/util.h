/*
 * util.h
 *
 */
#ifndef UTIL_H_
#define UTIL_H_

#define BIN_PATTERN_LN "%c%c%c%c %c%c%c%c\n"
#define BIN_PATTERN "%c%c%c%c %c%c%c%c "
#define BYTE_TO_BIN(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')
#define bprintln(a)  (printf(""BIN_PATTERN_LN, BYTE_TO_BIN(a)))
#define bprint(a)  (printf(""BIN_PATTERN, BYTE_TO_BIN(a)))

#define boolval(x) (x==0 ? "false" : (x==1 ? "true" : "?"))

int __ch__;
#define flush_stdin() while((__ch__=getchar()) != '\n' && __ch__ != EOF){}

#define countof(x) (sizeof(x)/sizeof(x[0]))

#endif /* UTIL_H_ */
