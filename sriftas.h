//Sriftas 5x7
const uint8_t small[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // tarpas
    0x04,0x04,0x04,0x04,0x04,0x00,0x04,    // !
    0x05,0x0A,0x00,0x00,0x00,0x00,0x00,    // "
    0x0A,0x0A,0x1F,0x0A,0x1F,0x0A,0x0A,    // #
    0x04,0x0F,0x14,0x0E,0x05,0x1E,0x04,    // $
    0x18,0x19,0x02,0x04,0x08,0x13,0x03,    // %
    0x0E,0x11,0x11,0x0E,0x15,0x12,0x0D,    // &
    0x04,0x04,0x08,0x00,0x00,0x00,0x00,    // '
    0x04,0x08,0x10,0x10,0x10,0x08,0x04,    // (
    0x04,0x02,0x01,0x01,0x01,0x02,0x04,    // )
    0x00,0x04,0x15,0x0E,0x15,0x04,0x00,    // *
    0x00,0x04,0x04,0x1F,0x04,0x04,0x00,    // +
    0x00,0x00,0x00,0x00,0x00,0x80,0x10,    // ,
    0x00,0x00,0x00,0x1F,0x00,0x00,0x00,    // -
    0x00,0x00,0x00,0x00,0x00,0x00,0x04,    // .
    0x00,0x01,0x02,0x04,0x08,0x10,0x00,    // /
    0x0E,0x11,0x13,0x15,0x19,0x11,0x0E,    // 0
    0x04,0x0C,0x04,0x04,0x04,0x04,0x0E,    // 1
    0x0E,0x11,0x01,0x02,0x04,0x08,0x1F,    // 2
    0x1F,0x02,0x04,0x02,0x01,0x01,0x0E,    // 3
    0x02,0x06,0x0A,0x12,0x1F,0x02,0x02,    // 4
    0x1F,0x10,0x1E,0x01,0x01,0x01,0x0E,    // 5
    0x0F,0x10,0x10,0x0E,0x11,0x11,0x0E,    // 6
    0x1F,0x01,0x01,0x02,0x04,0x08,0x10,    // 7
    0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E,    // 8
    0x0E,0x11,0x11,0x0E,0x01,0x01,0x1E,    // 9
    0x00,0x06,0x06,0x00,0x06,0x06,0x00,    // :
    0x00,0x06,0x06,0x00,0x06,0x04,0x08,    // ;
    0x02,0x04,0x08,0x10,0x08,0x04,0x02,    // <
    0x00,0x00,0x1F,0x00,0x1F,0x00,0x00,    // =
    0x08,0x04,0x02,0x01,0x02,0x04,0x08,    // >
    0x0E,0x11,0x02,0x04,0x04,0x00,0x04,    // ?
    0x0E,0x11,0x01,0x0D,0x15,0x15,0x0E,    // @
    0x04,0x0A,0x11,0x1F,0x11,0x11,0x11,    // A
    0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E,    // B
    0x0F,0x10,0x10,0x10,0x10,0x10,0x0F,    // C
    0x1E,0x11,0x11,0x11,0x11,0x11,0x1E,    // D
    0x1F,0x10,0x10,0x1F,0x10,0x10,0x1F,    // E
    0x1F,0x10,0x10,0x1F,0x10,0x10,0x10,    // F
    0x0F,0x10,0x10,0x16,0x11,0x11,0x0E,    // G
    0x11,0x11,0x11,0x1F,0x11,0x11,0x11,    // H
    0x04,0x04,0x04,0x04,0x04,0x04,0x04,    // I
    0x01,0x01,0x01,0x01,0x01,0x11,0x0E,    // J
    0x11,0x12,0x14,0x18,0x14,0x12,0x11,    // K
    0x10,0x10,0x10,0x10,0x10,0x10,0x1F,    // L
    0x11,0x1B,0x15,0x11,0x11,0x11,0x11,    // M
    0x11,0x11,0x19,0x15,0x13,0x11,0x11,    // N
    0x0E,0x11,0x11,0x11,0x11,0x11,0x0E,    // O
    0x0E,0x11,0x11,0x0E,0x10,0x10,0x10,    // P
    0x0E,0x11,0x11,0x11,0x15,0x12,0x0D,    // Q
    0x0E,0x11,0x11,0x1E,0x14,0x12,0x11,    // R
    0x0F,0x10,0x10,0x0E,0x01,0x01,0x1E,    // S
    0x1F,0x04,0x04,0x04,0x04,0x04,0x04,    // T
    0x11,0x11,0x11,0x11,0x11,0x11,0x0E,    // U
    0x11,0x11,0x11,0x11,0x11,0x0A,0x04,    // V
    0x11,0x11,0x11,0x11,0x15,0x1B,0x11,    // W
    0x11,0x11,0x0A,0x04,0x0A,0x11,0x11,    // X
    0x11,0x11,0x0A,0x04,0x04,0x04,0x04,    // Y
    0x1F,0x01,0x02,0x04,0x08,0x10,0x1F,    // Z
    0x1B,0x10,0x10,0x10,0x10,0x10,0x1B,    // [
    0x00,0x10,0x08,0x04,0x02,0x01,0x00,    // backslash
    0x07,0x01,0x01,0x01,0x01,0x01,0x07,    // [
    0x04,0x0A,0x11,0x00,0x00,0x00,0x00,    // ^
    0x00,0x00,0x00,0x00,0x00,0x00,0x1F,    // _
    0x04,0x04,0x02,0x00,0x00,0x00,0x00,    // `
    0x00,0x00,0x0E,0x01,0x0F,0x11,0x0E,    // a
    0x10,0x10,0x10,0x1E,0x11,0x11,0x0E,    // b
    0x00,0x00,0x0E,0x10,0x10,0x11,0x0E,    // c
    0x01,0x01,0x01,0x0F,0x11,0x11,0x0E,    // d
    0x00,0x00,0x0E,0x11,0x1E,0x10,0x0E,    // e
    0x06,0x04,0x0F,0x04,0x04,0x04,0x04,    // f
    0x00,0x0E,0x11,0x11,0x0F,0x01,0x1E,    // g
    0x10,0x10,0x10,0x16,0x19,0x11,0x11,    // h
    0x00,0x04,0x00,0x0C,0x04,0x04,0x0E,    // i
    0x00,0x04,0x00,0x0C,0x04,0x04,0x08,    // j
    0x10,0x10,0x12,0x14,0x18,0x14,0x12,    // k
    0x0C,0x04,0x04,0x04,0x04,0x04,0x0E,    // l
    0x00,0x00,0x00,0x1E,0x15,0x15,0x15,    // m
    0x00,0x00,0x16,0x19,0x11,0x11,0x11,    // n
    0x00,0x00,0x0E,0x11,0x11,0x11,0x0E,    // o
    0x00,0x00,0x1E,0x11,0x1E,0x10,0x10,    // p
    0x00,0x00,0x0E,0x11,0x0F,0x01,0x01,    // q
    0x00,0x00,0x16,0x19,0x10,0x10,0x10,    // r
    0x00,0x00,0x0E,0x10,0x0E,0x01,0x0E,    // s
    0x04,0x04,0x0E,0x04,0x04,0x04,0x06,    // t
    0x00,0x00,0x11,0x11,0x11,0x11,0x0E,    // u
    0x00,0x00,0x11,0x11,0x11,0x0A,0x04,    // v
    0x00,0x00,0x11,0x11,0x11,0x16,0x0A,    // w
    0x00,0x00,0x11,0x0A,0x04,0x0A,0x11,    // x
    0x00,0x00,0x11,0x11,0x0F,0x01,0x0E,    // y
    0x00,0x00,0x1F,0x02,0x04,0x08,0x1F,    // z
    0x02,0x04,0x04,0x08,0x04,0x04,0x02,    // {
    0x04,0x04,0x04,0x04,0x04,0x04,0x04,    // |
    0x08,0x04,0x04,0x02,0x04,0x04,0x08,    // }
    0x00,0x00,0x08,0x15,0x02,0x00,0x00,    // ~
    0x06,0x09,0x09,0x06,0x00,0x00,0x00,    // temperaturos zenklas
};

//Sriftas 8x16
const uint8_t normal[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x20,0x00,0x00,  // !
0x00,0x28,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0x28,0x28,0xFC,0x28,0x50,0xFC,0x50,0x50,0x00,0x00,  // #
0x00,0x20,0x78,0xA8,0xA0,0x60,0x30,0x28,0xA8,0xF0,0x20,0x00,  // $
0x00,0x00,0x48,0xA8,0xB0,0x50,0x28,0x34,0x54,0x48,0x00,0x00,  // %
0x00,0x00,0x20,0x50,0x50,0x78,0xA8,0xA8,0x90,0x6C,0x00,0x00,  // &
0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x04,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x04,0x00,  // (
0x00,0x40,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x40,0x00,  // )
0x00,0x00,0x00,0x20,0xA8,0x70,0x70,0xA8,0x20,0x00,0x00,0x00,  // *
0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x80,  // ,
0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,  // .
0x00,0x08,0x10,0x10,0x10,0x20,0x20,0x40,0x40,0x40,0x80,0x00,  // /

0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,  // 0
0x00,0x00,0x20,0x60,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // 1
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x40,0x80,0xF8,0x00,0x00,  // 2
0x00,0x00,0x70,0x88,0x08,0x30,0x08,0x08,0x88,0x70,0x00,0x00,  // 3
0x00,0x00,0x10,0x30,0x50,0x50,0x90,0x78,0x10,0x18,0x00,0x00,  // 4
0x00,0x00,0xF8,0x80,0x80,0xF0,0x08,0x08,0x88,0x70,0x00,0x00,  // 5
0x00,0x00,0x70,0x90,0x80,0xF0,0x88,0x88,0x88,0x70,0x00,0x00,  // 6
0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x20,0x20,0x20,0x00,0x00,  // 7
0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x88,0x70,0x00,0x00,  // 8
0x00,0x00,0x70,0x88,0x88,0x88,0x78,0x08,0x48,0x70,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x20,0x20,0x00,  // ;
0x00,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x00,0x00,  // <
0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,  // =
0x00,0x40,0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x40,0x00,0x00,  // >
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x20,0x00,0x20,0x00,0x00,  // ?

0x00,0x00,0x70,0x88,0x98,0xA8,0xA8,0xB8,0x80,0x78,0x00,0x00,  // @
0x00,0x00,0x20,0x20,0x30,0x50,0x50,0x78,0x48,0xCC,0x00,0x00,  // A
0x00,0x00,0xF0,0x48,0x48,0x70,0x48,0x48,0x48,0xF0,0x00,0x00,  // B
0x00,0x00,0x78,0x88,0x80,0x80,0x80,0x80,0x88,0x70,0x00,0x00,  // C
0x00,0x00,0xF0,0x48,0x48,0x48,0x48,0x48,0x48,0xF0,0x00,0x00,  // D
0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x48,0xF8,0x00,0x00,  // E
0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x40,0xE0,0x00,0x00,  // F
0x00,0x00,0x38,0x48,0x80,0x80,0x9C,0x88,0x48,0x30,0x00,0x00,  // G
0x00,0x00,0xCC,0x48,0x48,0x78,0x48,0x48,0x48,0xCC,0x00,0x00,  // H
0x00,0x00,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,  // I
0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0xE0,0x00,  // J
0x00,0x00,0xEC,0x48,0x50,0x60,0x50,0x50,0x48,0xEC,0x00,0x00,  // K
0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x44,0xFC,0x00,0x00,  // L
0x00,0x00,0xD8,0xD8,0xD8,0xD8,0xA8,0xA8,0xA8,0xA8,0x00,0x00,  // M
0x00,0x00,0xDC,0x48,0x68,0x68,0x58,0x58,0x48,0xE8,0x00,0x00,  // N
0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,  // O

0x00,0x00,0xF0,0x48,0x48,0x70,0x40,0x40,0x40,0xE0,0x00,0x00,  // P
0x00,0x00,0x70,0x88,0x88,0x88,0x88,0xE8,0x98,0x70,0x18,0x00,  // Q
0x00,0x00,0xF0,0x48,0x48,0x70,0x50,0x48,0x48,0xEC,0x00,0x00,  // R
0x00,0x00,0x78,0x88,0x80,0x60,0x10,0x08,0x88,0xF0,0x00,0x00,  // S
0x00,0x00,0xF8,0xA8,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // T
0x00,0x00,0xCC,0x48,0x48,0x48,0x48,0x48,0x48,0x30,0x00,0x00,  // U
0x00,0x00,0xCC,0x48,0x48,0x50,0x50,0x30,0x20,0x20,0x00,0x00,  // V
0x00,0x00,0xA8,0xA8,0xA8,0x70,0x50,0x50,0x50,0x50,0x00,0x00,  // W
0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x50,0x50,0xD8,0x00,0x00,  // X
0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // Y
0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x40,0x48,0xF8,0x00,0x00,  // Z
0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x38,0x00,  // [
0x00,0x40,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x00,0x00,  // <backslash>
0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00,  // ]
0x00,0x20,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,  // _

0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x38,0x48,0x3C,0x00,0x00,  // a
0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0x70,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x40,0x40,0x38,0x00,0x00,  // c
0x00,0x00,0x18,0x08,0x08,0x38,0x48,0x48,0x48,0x3C,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x78,0x40,0x38,0x00,0x00,  // e
0x00,0x00,0x1C,0x20,0x20,0x78,0x20,0x20,0x20,0x78,0x00,0x00,  // f
0x00,0x00,0x00,0x00,0x00,0x3C,0x48,0x30,0x40,0x78,0x44,0x38,  // g
0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0xEC,0x00,0x00,  // h
0x00,0x00,0x20,0x00,0x00,0x60,0x20,0x20,0x20,0x70,0x00,0x00,  // i
0x00,0x00,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0xE0,  // j
0x00,0x00,0xC0,0x40,0x40,0x5C,0x50,0x70,0x48,0xEC,0x00,0x00,  // k
0x00,0x00,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,  // l
0x00,0x00,0x00,0x00,0x00,0xF0,0xA8,0xA8,0xA8,0xA8,0x00,0x00,  // m
0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0xEC,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x30,0x00,0x00,  // o

0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0x70,0x40,0xE0,  // p
0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x48,0x48,0x38,0x08,0x1C,  // q
0x00,0x00,0x00,0x00,0x00,0xD8,0x60,0x40,0x40,0xE0,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0x00,0x78,0x40,0x30,0x08,0x78,0x00,0x00,  // s
0x00,0x00,0x00,0x20,0x20,0x70,0x20,0x20,0x20,0x18,0x00,0x00,  // t
0x00,0x00,0x00,0x00,0x00,0xD8,0x48,0x48,0x48,0x3C,0x00,0x00,  // u
0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x00,0x00,  // v
0x00,0x00,0x00,0x00,0x00,0xA8,0xA8,0x70,0x50,0x50,0x00,0x00,  // w
0x00,0x00,0x00,0x00,0x00,0xD8,0x50,0x20,0x50,0xD8,0x00,0x00,  // x
0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x20,0xC0,  // y
0x00,0x00,0x00,0x00,0x00,0x78,0x10,0x20,0x20,0x78,0x00,0x00,  // z
0x00,0x18,0x10,0x10,0x10,0x20,0x10,0x10,0x10,0x10,0x18,0x00,  // {
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,  // |
0x00,0x60,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x60,0x00,  // }
0x40,0xA4,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ~
};

//Sriftas 8x16
const uint8_t normal_bold[] = {
/*   (32) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* ! (33) */ 0x00, 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x3C, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
  /* " (34) */ 0x00, 0x00, 0x66, 0x66, 0x66, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* # (35) */ 0x00, 0x00, 0x00, 0x00, 0x6C, 0x6C, 0xFE, 0x6C, 0x6C, 0x6C, 0xFE, 0x6C, 0x6C, 0x00, 0x00, 0x00,
  /* $ (36) */ 0x00, 0x18, 0x18, 0x7C, 0xC6, 0xC2, 0xC0, 0x7C, 0x06, 0x06, 0x86, 0xC6, 0x7C, 0x18, 0x18, 0x00,
  /* % (37) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0xC6, 0x0C, 0x18, 0x30, 0x60, 0xC6, 0x86, 0x00, 0x00, 0x00,
  /* & (38) */ 0x00, 0x00, 0x00, 0x38, 0x6C, 0x6C, 0x38, 0x76, 0xDC, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x00, 0x00,
  /* ' (39) */ 0x00, 0x00, 0x30, 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* ( (40) */ 0x00, 0x00, 0x00, 0x0C, 0x18, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00, 0x00, 0x00,
  /* ) (41) */ 0x00, 0x00, 0x00, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00, 0x00, 0x00,
  /* * (42) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* + (43) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* , (44) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x30, 0x00, 0x00,
  /* - (45) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* . (46) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
  /* / (47) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00,
  /* 0 (48) */ 0x00, 0x00, 0x00, 0x38, 0x6C, 0xC6, 0xC6, 0xD6, 0xD6, 0xC6, 0xC6, 0x6C, 0x38, 0x00, 0x00, 0x00,
  /* 1 (49) */ 0x00, 0x00, 0x00, 0x18, 0x38, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7E, 0x00, 0x00, 0x00,
  /* 2 (50) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xC6, 0xFE, 0x00, 0x00, 0x00,
  /* 3 (51) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0x06, 0x06, 0x3C, 0x06, 0x06, 0x06, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* 4 (52) */ 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x3C, 0x6C, 0xCC, 0xFE, 0x0C, 0x0C, 0x0C, 0x1E, 0x00, 0x00, 0x00,
  /* 5 (53) */ 0x00, 0x00, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xFC, 0x06, 0x06, 0x06, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* 6 (54) */ 0x00, 0x00, 0x00, 0x38, 0x60, 0xC0, 0xC0, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* 7 (55) */ 0x00, 0x00, 0x00, 0xFE, 0xC6, 0x06, 0x06, 0x0C, 0x18, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00,
  /* 8 (56) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* 9 (57) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x06, 0x06, 0x0C, 0x78, 0x00, 0x00, 0x00,
  /* : (58) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* ; (59) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00,
  /* < (60) */ 0x00, 0x00, 0x00, 0x00, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x00, 0x00, 0x00,
  /* = (61) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* > (62) */ 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00, 0x00, 0x00,
  /* ? (63) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0x0C, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
  /* @ (64) */ 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xDE, 0xDE, 0xDE, 0xDC, 0xC0, 0x7C, 0x00, 0x00, 0x00,
  /* A (65) */ 0x00, 0x00, 0x00, 0x10, 0x38, 0x6C, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00,
  /* B (66) */ 0x00, 0x00, 0x00, 0xFC, 0x66, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x66, 0x66, 0xFC, 0x00, 0x00, 0x00,
  /* C (67) */ 0x00, 0x00, 0x00, 0x3C, 0x66, 0xC2, 0xC0, 0xC0, 0xC0, 0xC0, 0xC2, 0x66, 0x3C, 0x00, 0x00, 0x00,
  /* D (68) */ 0x00, 0x00, 0x00, 0xF8, 0x6C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x6C, 0xF8, 0x00, 0x00, 0x00,
  /* E (69) */ 0x00, 0x00, 0x00, 0xFE, 0x66, 0x62, 0x68, 0x78, 0x68, 0x60, 0x62, 0x66, 0xFE, 0x00, 0x00, 0x00,
  /* F (70) */ 0x00, 0x00, 0x00, 0xFE, 0x66, 0x62, 0x68, 0x78, 0x68, 0x60, 0x60, 0x60, 0xF0, 0x00, 0x00, 0x00,
  /* G (71) */ 0x00, 0x00, 0x00, 0x3C, 0x66, 0xC2, 0xC0, 0xC0, 0xDE, 0xC6, 0xC6, 0x66, 0x3A, 0x00, 0x00, 0x00,
  /* H (72) */ 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00,
  /* I (73) */ 0x00, 0x00, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00,
  /* J (74) */ 0x00, 0x00, 0x00, 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00,
  /* K (75) */ 0x00, 0x00, 0x00, 0xE6, 0x66, 0x66, 0x6C, 0x78, 0x78, 0x6C, 0x66, 0x66, 0xE6, 0x00, 0x00, 0x00,
  /* L (76) */ 0x00, 0x00, 0x00, 0xF0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x62, 0x66, 0xFE, 0x00, 0x00, 0x00,
  /* M (77) */ 0x00, 0x00, 0x00, 0xC3, 0xE7, 0xFF, 0xFF, 0xDB, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x00, 0x00, 0x00,
  /* N (78) */ 0x00, 0x00, 0x00, 0xC6, 0xE6, 0xF6, 0xFE, 0xDE, 0xCE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00,
  /* O (79) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* P (80) */ 0x00, 0x00, 0x00, 0xFC, 0x66, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x60, 0xF0, 0x00, 0x00, 0x00,
  /* Q (81) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xD6, 0xDE, 0x7C, 0x0C, 0x0E, 0x00,
  /* R (82) */ 0x00, 0x00, 0x00, 0xFC, 0x66, 0x66, 0x66, 0x7C, 0x6C, 0x66, 0x66, 0x66, 0xE6, 0x00, 0x00, 0x00,
  /* S (83) */ 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0x60, 0x38, 0x0C, 0x06, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* T (84) */ 0x00, 0x00, 0x00, 0xFF, 0xDB, 0x99, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00,
  /* U (85) */ 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* V (86) */ 0x00, 0x00, 0x00, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x00, 0x00, 0x00,
  /* W (87) */ 0x00, 0x00, 0x00, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xDB, 0xDB, 0xFF, 0x66, 0x66, 0x00, 0x00, 0x00,
  /* X (88) */ 0x00, 0x00, 0x00, 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x18, 0x3C, 0x66, 0xC3, 0xC3, 0x00, 0x00, 0x00,
  /* Y (89) */ 0x00, 0x00, 0x00, 0xC3, 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00,
  /* Z (90) */ 0x00, 0x00, 0x00, 0xFF, 0xC3, 0x86, 0x0C, 0x18, 0x30, 0x60, 0xC1, 0xC3, 0xFF, 0x00, 0x00, 0x00,
  /* [ (91) */ 0x00, 0x00, 0x00, 0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00, 0x00, 0x00,
  /* \ (92) */ 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x06, 0x02, 0x00, 0x00, 0x00,
  /* ] (93) */ 0x00, 0x00, 0x00, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00, 0x00, 0x00,
  /* ^ (94) */ 0x00, 0x10, 0x38, 0x6C, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* _ (95) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00,
  /* ` (96) */ 0x00, 0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* a (97) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x00, 0x00,
  /* b (98) */ 0x00, 0x00, 0x00, 0xE0, 0x60, 0x60, 0x78, 0x6C, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x00, 0x00, 0x00,
  /* c (99) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC0, 0xC0, 0xC0, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* d (100) */ 0x00, 0x00, 0x00, 0x1C, 0x0C, 0x0C, 0x3C, 0x6C, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x00, 0x00,
  /* e (101) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xFE, 0xC0, 0xC0, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* f (102) */ 0x00, 0x00, 0x00, 0x38, 0x6C, 0x64, 0x60, 0xF0, 0x60, 0x60, 0x60, 0x60, 0xF0, 0x00, 0x00, 0x00,
  /* g (103) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xCC, 0x78,
  /* h (104) */ 0x00, 0x00, 0x00, 0xE0, 0x60, 0x60, 0x6C, 0x76, 0x66, 0x66, 0x66, 0x66, 0xE6, 0x00, 0x00, 0x00,
  /* i (105) */ 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00,
  /* j (106) */ 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x66, 0x66, 0x3C,
  /* k (107) */ 0x00, 0x00, 0x00, 0xE0, 0x60, 0x60, 0x66, 0x6C, 0x78, 0x78, 0x6C, 0x66, 0xE6, 0x00, 0x00, 0x00,
  /* l (108) */ 0x00, 0x00, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00,
  /* m (109) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x00, 0x00, 0x00,
  /* n (110) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00,
  /* o (111) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* p (112) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x60, 0x60, 0xF0,
  /* q (113) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0x0C, 0x1E,
  /* r (114) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x76, 0x66, 0x60, 0x60, 0x60, 0xF0, 0x00, 0x00, 0x00,
  /* s (115) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0x60, 0x38, 0x0C, 0xC6, 0x7C, 0x00, 0x00, 0x00,
  /* t (116) */ 0x00, 0x00, 0x00, 0x10, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x30, 0x30, 0x36, 0x1C, 0x00, 0x00, 0x00,
  /* u (117) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x00, 0x00,
  /* v (118) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0xC3, 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x00, 0x00, 0x00,
  /* w (119) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0xC3, 0xC3, 0xDB, 0xDB, 0xFF, 0x66, 0x00, 0x00, 0x00,
  /* x (120) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0xC3, 0x00, 0x00, 0x00,
  /* y (121) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x0C, 0xF8,
  /* z (122) */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xCC, 0x18, 0x30, 0x60, 0xC6, 0xFE, 0x00, 0x00, 0x00,
  /* { (123) */ 0x00, 0x00, 0x00, 0x0E, 0x18, 0x18, 0x18, 0x70, 0x18, 0x18, 0x18, 0x18, 0x0E, 0x00, 0x00, 0x00,
  /* | (124) */ 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00,
  /* } (125) */ 0x00, 0x00, 0x00, 0x70, 0x18, 0x18, 0x18, 0x0E, 0x18, 0x18, 0x18, 0x18, 0x70, 0x00, 0x00, 0x00,
  /* ~ (126) */ 0x00, 0x00, 0x00, 0x76, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    /* BLK(127)*/ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

//Sriftas 16x24
const uint8_t big[] = {
    0x00,0x00,0x3E,0x7C,0x3E,0x7C,0x40,0x06,0x60,0x0E,0x60,0x1A,0x60,0x32,0x60,0x36,0x60,0x66,0x60,0x66,0x60,0x06,0x00,0x00,0x00,0x00,0x60,0x06,0x66,0x06,0x66,0x06,0x6C,0x06,0x4C,0x06,0x58,0x06,0x70,0x06,0x60,0x02,0x3E,0x7C,0x3E,0x7C,0x00,0x00,  // 0
    0x00,0x00,0x3E,0x00,0x1F,0x00,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00,0x00,0x00,0x00,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x1F,0xF8,0x3E,0x7C,0x00,0x00,  // 1
    0x00,0x00,0x3E,0x7C,0x1E,0x7C,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x3E,0x7C,0x3E,0x7C,0x40,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40,0x00,0x3E,0x78,0x3E,0x7C,0x00,0x00,  // 2
    0x00,0x00,0x3E,0x7C,0x1E,0x7C,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x3E,0x7C,0x3E,0x7C,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x1E,0x7C,0x3E,0x7C,0x00,0x00,  // 3
    0x00,0x00,0x00,0x00,0x40,0x02,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x40,0x02,0x3E,0x7C,0x3E,0x7C,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x00,0x00,0x00,  // 4
    0x00,0x00,0x3E,0x7C,0x3E,0x78,0x40,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40,0x00,0x3E,0x7C,0x3E,0x7C,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x1E,0x7C,0x3E,0x7C,0x00,0x00,  // 5
    0x00,0x00,0x3E,0x7C,0x3E,0x78,0x40,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40,0x00,0x3E,0x7C,0x3E,0x7C,0x40,0x02,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x40,0x02,0x3E,0x7C,0x3E,0x7C,0x00,0x00,  // 6
    0x00,0x00,0x3E,0x7C,0x1E,0x7C,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x00,0x00,0x00,  // 7
    0x00,0x00,0x3E,0x7C,0x3E,0x7C,0x40,0x02,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x40,0x02,0x3E,0x7C,0x3E,0x7C,0x40,0x02,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x40,0x02,0x3E,0x7C,0x3E,0x7C,0x00,0x00,  // 8
    0x00,0x00,0x3E,0x7C,0x3E,0x7C,0x40,0x02,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x40,0x02,0x3E,0x7C,0x3E,0x7C,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x1E,0x7C,0x3E,0x7C,0x00,0x00,  // 9
};


//16x32
const uint8_t big2[] = {
0x00,0x00,0x00,0x00,0x01,0xC0,0x07,0xE0,0x0F,0xF0,0x1E,0x78,0x1C,0x38,0x1C,0x1C,0x38,0x3C,0x38,0x3C,0x38,0x7C,0x38,0x7C,0x38,0xCC,0x38,0xCE,0x39,0xCE,0x39,0x8E,0x3B,0x8E,0x3B,0x0C,0x3F,0x0C,0x3E,0x1C,0x3E,0x1C,0x3C,0x1C,0x3C,0x1C,0x1C,0x1C,0x1C,0x38,0x0E,0x78,0x0F,0xF0,0x07,0xE0,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,  // 0
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xE0,0x07,0xE0,0x1F,0xE0,0x1F,0xE0,0x1C,0xE0,0x10,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xC0,0x00,0xC0,0x0F,0xFC,0x1F,0xFE,0x0F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 1
0x00,0x00,0x00,0x00,0x07,0xC0,0x1F,0xF0,0x3F,0xF8,0x3C,0x3C,0x30,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x1C,0x00,0x1C,0x00,0x38,0x00,0x38,0x00,0x70,0x00,0xE0,0x01,0xE0,0x01,0xC0,0x03,0x80,0x07,0x00,0x0E,0x00,0x1E,0x00,0x3C,0x00,0x3F,0xFE,0x3F,0xFE,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 2
0x00,0x00,0x00,0x00,0x07,0xC0,0x1F,0xF0,0x3F,0xF8,0x3C,0x78,0x00,0x3C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x38,0x07,0xF0,0x07,0xE0,0x07,0xF0,0x00,0x38,0x00,0x1C,0x00,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x1C,0x20,0x3C,0x3F,0xFC,0x3F,0xF8,0x3F,0xF0,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,  // 3
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xF0,0x00,0xF0,0x01,0xF0,0x01,0xB0,0x03,0x30,0x03,0x30,0x07,0x70,0x06,0x70,0x0E,0x70,0x0C,0x70,0x1C,0x70,0x18,0x70,0x38,0x70,0x30,0x30,0x70,0x30,0x7F,0xFE,0x7F,0xFE,0x7F,0xFE,0x00,0x70,0x00,0x30,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 4
0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF8,0x1F,0xF8,0x1F,0xF8,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1F,0xC0,0x1F,0xF0,0x1F,0xF8,0x18,0x7C,0x00,0x3C,0x00,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x1C,0x20,0x3C,0x3F,0xF8,0x3F,0xF8,0x3F,0xE0,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,  // 5
0x00,0x00,0x00,0x00,0x01,0xF0,0x07,0xF8,0x0F,0xF8,0x0F,0x18,0x1C,0x00,0x1C,0x00,0x18,0x00,0x38,0x00,0x38,0x00,0x39,0xE0,0x33,0xF0,0x3F,0xF8,0x3E,0x3C,0x3C,0x1C,0x38,0x1C,0x38,0x0C,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0C,0x18,0x1C,0x1C,0x1C,0x1E,0x38,0x0F,0xF8,0x07,0xF0,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,  // 6
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x3F,0xFE,0x3F,0xFC,0x00,0x1C,0x00,0x1C,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x60,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x03,0x80,0x03,0x80,0x03,0x80,0x07,0x00,0x07,0x00,0x07,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 7
0x00,0x00,0x00,0x00,0x03,0xC0,0x0F,0xF0,0x1F,0xF8,0x1E,0x38,0x1C,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x1C,0x1C,0x1C,0x38,0x0F,0xF0,0x07,0xE0,0x0F,0xF0,0x1E,0x78,0x1C,0x1C,0x38,0x1C,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x1C,0x3C,0x1C,0x1E,0x7C,0x1F,0xF8,0x0F,0xF0,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,  // 8
0x00,0x00,0x00,0x00,0x03,0xC0,0x0F,0xF0,0x1F,0xF0,0x1C,0x78,0x38,0x38,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x30,0x1C,0x30,0x1C,0x38,0x1C,0x38,0x1E,0x38,0x1E,0x38,0x3E,0x1E,0x7E,0x1F,0xEC,0x0F,0xCC,0x03,0x8C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x38,0x00,0x38,0x1F,0xF0,0x1F,0xF0,0x1F,0xE0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 9
};
