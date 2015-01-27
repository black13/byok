#include <kernel/kb.h>

char kbd_en_gb[3][96] = {
    {                                                   // Normal
          0,   27,  '1',  '2',  '3',  '4',  '5',  '6',
        '7',  '8',  '9',  '0',  '-',  '=', '\b', '\t',
        'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',
        'o',  'p',  '[',  ']',  '\n' ,  0,  'a',  's',
        'd',  'f',  'g',  'h',  'j',  'k',  'l',  ';',
       '\'',  '`',    0,  '#',  'z',  'x',  'c',  'v',
        'b',  'n',  'm',  ',',  '.',  '/',    0,  '*',
          0,  ' ',    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,  '7',
        '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
        '2',  '3',  '0',  '.',    0,    0, '\\',    0,
          0,    0,    0,    0,    0,    0,    0,    0
    },
    {                                                   // Shift
          0,   27,  '!',  '"',  '#',  '$',  '%' , '^',
        '&',  '*',  '(',  ')',  '_',  '+', '\b', '\t',
        'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',
        'O',  'P',  '{',  '}', '\n',    0,  'A',  'S',
        'D',  'F',  'G',  'H',  'J',  'K',  'L',  ':',
        '@',  '~',    0,  '~',  'Z',  'X',  'C',  'V',
        'B',  'N',  'M',  '<',  '>',  '?',    0,  '*',
          0,  ' ',    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,  '7',
        '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
        '2',  '3',  '0',  '.',    0,    0,    0,  '|',
          0,    0,    0,    0,    0,    0,    0,    0
    },
    {                                                   // CAPS
          0,   27,  '1',  '2',  '3',  '4',  '5',  '6',
        '7',  '8',  '9',  '0',  '-',  '=', '\b', '\t',
        'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',
        'O',  'P',  '[',  ']',  '\n',   0,  'A',  'S',
        'D',  'F',  'G',  'H',  'J',  'K',  'L',  ';',
       '\'',  '`',    0, '\\',  'Z',  'X',  'C',  'V',
        'B',  'N',  'M',  ',',  '.',  '/',    0,  '*',
          0,  ' ',    0,    0,    0,    0,    0,    0,
          0,    0,    0,    0,    0,    0,    0,  '7',
        '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
        '2',  '3',  '0',  '.',    0,    0,    0, '\\',
          0,    0,    0,    0,    0,    0,    0,    0
    }
};