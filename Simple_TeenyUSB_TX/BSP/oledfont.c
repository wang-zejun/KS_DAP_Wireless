#include "oledfont.h" 
	   
//常用ASCII表
//偏移量32
//ASCII字符集
//偏移量32
//大小:12*6
const unsigned char oled_asc2_1206[95][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0x3F,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x30,0x00,0x40,0x00,0x30,0x00,0x40,0x00,0x00,0x00},/*""",2*/
{0x09,0x00,0x0B,0xC0,0x3D,0x00,0x0B,0xC0,0x3D,0x00,0x09,0x00},/*"#",3*/
{0x18,0xC0,0x24,0x40,0x7F,0xE0,0x22,0x40,0x31,0x80,0x00,0x00},/*"$",4*/
{0x18,0x00,0x24,0xC0,0x1B,0x00,0x0D,0x80,0x32,0x40,0x01,0x80},/*"%",5*/
{0x03,0x80,0x1C,0x40,0x27,0x40,0x1C,0x80,0x07,0x40,0x00,0x40},/*"&",6*/
{0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x20,0x40,0x40,0x20},/*"(",8*/
{0x00,0x00,0x40,0x20,0x20,0x40,0x1F,0x80,0x00,0x00,0x00,0x00},/*")",9*/
{0x09,0x00,0x06,0x00,0x1F,0x80,0x06,0x00,0x09,0x00,0x00,0x00},/*"*",10*/
{0x04,0x00,0x04,0x00,0x3F,0x80,0x04,0x00,0x04,0x00,0x00,0x00},/*"+",11*/
{0x00,0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x20,0x01,0xC0,0x06,0x00,0x38,0x00,0x40,0x00,0x00,0x00},/*"/",15*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"0",16*/
{0x00,0x00,0x10,0x40,0x3F,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"1",17*/
{0x18,0xC0,0x21,0x40,0x22,0x40,0x24,0x40,0x18,0x40,0x00,0x00},/*"2",18*/
{0x10,0x80,0x20,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"3",19*/
{0x02,0x00,0x0D,0x00,0x11,0x00,0x3F,0xC0,0x01,0x40,0x00,0x00},/*"4",20*/
{0x3C,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x23,0x80,0x00,0x00},/*"5",21*/
{0x1F,0x80,0x24,0x40,0x24,0x40,0x34,0x40,0x03,0x80,0x00,0x00},/*"6",22*/
{0x30,0x00,0x20,0x00,0x27,0xC0,0x38,0x00,0x20,0x00,0x00,0x00},/*"7",23*/
{0x1B,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"8",24*/
{0x1C,0x00,0x22,0xC0,0x22,0x40,0x22,0x40,0x1F,0x80,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x04,0x60,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
{0x00,0x00,0x04,0x00,0x0A,0x00,0x11,0x00,0x20,0x80,0x40,0x40},/*"<",28*/
{0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x40,0x40,0x20,0x80,0x11,0x00,0x0A,0x00,0x04,0x00},/*">",30*/
{0x18,0x00,0x20,0x00,0x23,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"?",31*/
{0x1F,0x80,0x20,0x40,0x27,0x40,0x29,0x40,0x1F,0x40,0x00,0x00},/*"@",32*/
{0x00,0x40,0x07,0xC0,0x39,0x00,0x0F,0x00,0x01,0xC0,0x00,0x40},/*"A",33*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"B",34*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x30,0x80,0x00,0x00},/*"C",35*/
{0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"D",36*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x40,0x30,0xC0,0x00,0x00},/*"E",37*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x00,0x30,0x00,0x00,0x00},/*"F",38*/
{0x0F,0x00,0x10,0x80,0x20,0x40,0x22,0x40,0x33,0x80,0x02,0x00},/*"G",39*/
{0x20,0x40,0x3F,0xC0,0x04,0x00,0x04,0x00,0x3F,0xC0,0x20,0x40},/*"H",40*/
{0x20,0x40,0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x00,0x00},/*"I",41*/
{0x00,0x60,0x20,0x20,0x20,0x20,0x3F,0xC0,0x20,0x00,0x20,0x00},/*"J",42*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x0B,0x00,0x30,0xC0,0x20,0x40},/*"K",43*/
{0x20,0x40,0x3F,0xC0,0x20,0x40,0x00,0x40,0x00,0x40,0x00,0xC0},/*"L",44*/
{0x3F,0xC0,0x3C,0x00,0x03,0xC0,0x3C,0x00,0x3F,0xC0,0x00,0x00},/*"M",45*/
{0x20,0x40,0x3F,0xC0,0x0C,0x40,0x23,0x00,0x3F,0xC0,0x20,0x00},/*"N",46*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"O",47*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"P",48*/
{0x1F,0x80,0x21,0x40,0x21,0x40,0x20,0xE0,0x1F,0xA0,0x00,0x00},/*"Q",49*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x26,0x00,0x19,0xC0,0x00,0x40},/*"R",50*/
{0x18,0xC0,0x24,0x40,0x24,0x40,0x22,0x40,0x31,0x80,0x00,0x00},/*"S",51*/
{0x30,0x00,0x20,0x40,0x3F,0xC0,0x20,0x40,0x30,0x00,0x00,0x00},/*"T",52*/
{0x20,0x00,0x3F,0x80,0x00,0x40,0x00,0x40,0x3F,0x80,0x20,0x00},/*"U",53*/
{0x20,0x00,0x3E,0x00,0x01,0xC0,0x07,0x00,0x38,0x00,0x20,0x00},/*"V",54*/
{0x38,0x00,0x07,0xC0,0x3C,0x00,0x07,0xC0,0x38,0x00,0x00,0x00},/*"W",55*/
{0x20,0x40,0x39,0xC0,0x06,0x00,0x39,0xC0,0x20,0x40,0x00,0x00},/*"X",56*/
{0x20,0x00,0x38,0x40,0x07,0xC0,0x38,0x40,0x20,0x00,0x00,0x00},/*"Y",57*/
{0x30,0x40,0x21,0xC0,0x26,0x40,0x38,0x40,0x20,0xC0,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x00,0x7F,0xE0,0x40,0x20,0x40,0x20,0x00,0x00},/*"[",59*/
{0x00,0x00,0x70,0x00,0x0C,0x00,0x03,0x80,0x00,0x40,0x00,0x00},/*"\",60*/
{0x00,0x00,0x40,0x20,0x40,0x20,0x7F,0xE0,0x00,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x20,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10},/*"_",63*/
{0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x02,0x80,0x05,0x40,0x05,0x40,0x03,0xC0,0x00,0x40},/*"a",65*/
{0x20,0x00,0x3F,0xC0,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"b",66*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x06,0x40,0x00,0x00},/*"c",67*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x24,0x40,0x3F,0xC0,0x00,0x40},/*"d",68*/
{0x00,0x00,0x03,0x80,0x05,0x40,0x05,0x40,0x03,0x40,0x00,0x00},/*"e",69*/
{0x00,0x00,0x04,0x40,0x1F,0xC0,0x24,0x40,0x24,0x40,0x20,0x00},/*"f",70*/
{0x00,0x00,0x02,0xE0,0x05,0x50,0x05,0x50,0x06,0x50,0x04,0x20},/*"g",71*/
{0x20,0x40,0x3F,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"h",72*/
{0x00,0x00,0x04,0x40,0x27,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x10,0x00,0x10,0x04,0x10,0x27,0xE0,0x00,0x00,0x00,0x00},/*"j",74*/
{0x20,0x40,0x3F,0xC0,0x01,0x40,0x07,0x00,0x04,0xC0,0x04,0x40},/*"k",75*/
{0x20,0x40,0x20,0x40,0x3F,0xC0,0x00,0x40,0x00,0x40,0x00,0x00},/*"l",76*/
{0x07,0xC0,0x04,0x00,0x07,0xC0,0x04,0x00,0x03,0xC0,0x00,0x00},/*"m",77*/
{0x04,0x40,0x07,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"n",78*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"o",79*/
{0x04,0x10,0x07,0xF0,0x04,0x50,0x04,0x40,0x03,0x80,0x00,0x00},/*"p",80*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x50,0x07,0xF0,0x00,0x10},/*"q",81*/
{0x04,0x40,0x07,0xC0,0x02,0x40,0x04,0x00,0x04,0x00,0x00,0x00},/*"r",82*/
{0x00,0x00,0x06,0x40,0x05,0x40,0x05,0x40,0x04,0xC0,0x00,0x00},/*"s",83*/
{0x00,0x00,0x04,0x00,0x1F,0x80,0x04,0x40,0x00,0x40,0x00,0x00},/*"t",84*/
{0x04,0x00,0x07,0x80,0x00,0x40,0x04,0x40,0x07,0xC0,0x00,0x40},/*"u",85*/
{0x04,0x00,0x07,0x00,0x04,0xC0,0x01,0x80,0x06,0x00,0x04,0x00},/*"v",86*/
{0x06,0x00,0x01,0xC0,0x07,0x00,0x01,0xC0,0x06,0x00,0x00,0x00},/*"w",87*/
{0x04,0x40,0x06,0xC0,0x01,0x00,0x06,0xC0,0x04,0x40,0x00,0x00},/*"x",88*/
{0x04,0x10,0x07,0x10,0x04,0xE0,0x01,0x80,0x06,0x00,0x04,0x00},/*"y",89*/
{0x00,0x00,0x04,0x40,0x05,0xC0,0x06,0x40,0x04,0x40,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x04,0x00,0x7B,0xE0,0x40,0x20,0x00,0x00},/*"{",91*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x00,0x00},/*"|",92*/
{0x00,0x00,0x40,0x20,0x7B,0xE0,0x04,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
{0x40,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x20,0x00,0x40,0x00},/*"~",94*/
}; 
const unsigned char oled_asc2_1608[95][16]={	  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xCC,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x00,0x00},/*""",2*/
{0x02,0x20,0x03,0xFC,0x1E,0x20,0x02,0x20,0x03,0xFC,0x1E,0x20,0x02,0x20,0x00,0x00},/*"#",3*/
{0x00,0x00,0x0E,0x18,0x11,0x04,0x3F,0xFF,0x10,0x84,0x0C,0x78,0x00,0x00,0x00,0x00},/*"$",4*/
{0x0F,0x00,0x10,0x84,0x0F,0x38,0x00,0xC0,0x07,0x78,0x18,0x84,0x00,0x78,0x00,0x00},/*"%",5*/
{0x00,0x78,0x0F,0x84,0x10,0xC4,0x11,0x24,0x0E,0x98,0x00,0xE4,0x00,0x84,0x00,0x08},/*"&",6*/
{0x08,0x00,0x68,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x18,0x18,0x20,0x04,0x40,0x02,0x00,0x00},/*"(",8*/
{0x00,0x00,0x40,0x02,0x20,0x04,0x18,0x18,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*")",9*/
{0x02,0x40,0x02,0x40,0x01,0x80,0x0F,0xF0,0x01,0x80,0x02,0x40,0x02,0x40,0x00,0x00},/*"*",10*/
{0x00,0x80,0x00,0x80,0x00,0x80,0x0F,0xF8,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00},/*"+",11*/
{0x00,0x01,0x00,0x0D,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80},/*"-",13*/
{0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x00,0x00,0x06,0x00,0x18,0x00,0x60,0x01,0x80,0x06,0x00,0x18,0x00,0x20,0x00},/*"/",15*/
{0x00,0x00,0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"0",16*/
{0x00,0x00,0x08,0x04,0x08,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"1",17*/
{0x00,0x00,0x0E,0x0C,0x10,0x14,0x10,0x24,0x10,0x44,0x11,0x84,0x0E,0x0C,0x00,0x00},/*"2",18*/
{0x00,0x00,0x0C,0x18,0x10,0x04,0x11,0x04,0x11,0x04,0x12,0x88,0x0C,0x70,0x00,0x00},/*"3",19*/
{0x00,0x00,0x00,0xE0,0x03,0x20,0x04,0x24,0x08,0x24,0x1F,0xFC,0x00,0x24,0x00,0x00},/*"4",20*/
{0x00,0x00,0x1F,0x98,0x10,0x84,0x11,0x04,0x11,0x04,0x10,0x88,0x10,0x70,0x00,0x00},/*"5",21*/
{0x00,0x00,0x07,0xF0,0x08,0x88,0x11,0x04,0x11,0x04,0x18,0x88,0x00,0x70,0x00,0x00},/*"6",22*/
{0x00,0x00,0x1C,0x00,0x10,0x00,0x10,0xFC,0x13,0x00,0x1C,0x00,0x10,0x00,0x00,0x00},/*"7",23*/
{0x00,0x00,0x0E,0x38,0x11,0x44,0x10,0x84,0x10,0x84,0x11,0x44,0x0E,0x38,0x00,0x00},/*"8",24*/
{0x00,0x00,0x07,0x00,0x08,0x8C,0x10,0x44,0x10,0x44,0x08,0x88,0x07,0xF0,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0C,0x03,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
{0x00,0x00,0x00,0x80,0x01,0x40,0x02,0x20,0x04,0x10,0x08,0x08,0x10,0x04,0x00,0x00},/*"<",28*/
{0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x00,0x00},/*"=",29*/
{0x00,0x00,0x10,0x04,0x08,0x08,0x04,0x10,0x02,0x20,0x01,0x40,0x00,0x80,0x00,0x00},/*">",30*/
{0x00,0x00,0x0E,0x00,0x12,0x00,0x10,0x0C,0x10,0x6C,0x10,0x80,0x0F,0x00,0x00,0x00},/*"?",31*/
{0x03,0xE0,0x0C,0x18,0x13,0xE4,0x14,0x24,0x17,0xC4,0x08,0x28,0x07,0xD0,0x00,0x00},/*"@",32*/
{0x00,0x04,0x00,0x3C,0x03,0xC4,0x1C,0x40,0x07,0x40,0x00,0xE4,0x00,0x1C,0x00,0x04},/*"A",33*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x04,0x11,0x04,0x0E,0x88,0x00,0x70,0x00,0x00},/*"B",34*/
{0x03,0xE0,0x0C,0x18,0x10,0x04,0x10,0x04,0x10,0x04,0x10,0x08,0x1C,0x10,0x00,0x00},/*"C",35*/
{0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"D",36*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x04,0x17,0xC4,0x10,0x04,0x08,0x18,0x00,0x00},/*"E",37*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x00,0x17,0xC0,0x10,0x00,0x08,0x00,0x00,0x00},/*"F",38*/
{0x03,0xE0,0x0C,0x18,0x10,0x04,0x10,0x04,0x10,0x44,0x1C,0x78,0x00,0x40,0x00,0x00},/*"G",39*/
{0x10,0x04,0x1F,0xFC,0x10,0x84,0x00,0x80,0x00,0x80,0x10,0x84,0x1F,0xFC,0x10,0x04},/*"H",40*/
{0x00,0x00,0x10,0x04,0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x04,0x00,0x00,0x00,0x00},/*"I",41*/
{0x00,0x03,0x00,0x01,0x10,0x01,0x10,0x01,0x1F,0xFE,0x10,0x00,0x10,0x00,0x00,0x00},/*"J",42*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x03,0x80,0x14,0x64,0x18,0x1C,0x10,0x04,0x00,0x00},/*"K",43*/
{0x10,0x04,0x1F,0xFC,0x10,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x00},/*"L",44*/
{0x10,0x04,0x1F,0xFC,0x1F,0x00,0x00,0xFC,0x1F,0x00,0x1F,0xFC,0x10,0x04,0x00,0x00},/*"M",45*/
{0x10,0x04,0x1F,0xFC,0x0C,0x04,0x03,0x00,0x00,0xE0,0x10,0x18,0x1F,0xFC,0x10,0x00},/*"N",46*/
{0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"O",47*/
{0x10,0x04,0x1F,0xFC,0x10,0x84,0x10,0x80,0x10,0x80,0x10,0x80,0x0F,0x00,0x00,0x00},/*"P",48*/
{0x07,0xF0,0x08,0x18,0x10,0x24,0x10,0x24,0x10,0x1C,0x08,0x0A,0x07,0xF2,0x00,0x00},/*"Q",49*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x00,0x11,0xC0,0x11,0x30,0x0E,0x0C,0x00,0x04},/*"R",50*/
{0x00,0x00,0x0E,0x1C,0x11,0x04,0x10,0x84,0x10,0x84,0x10,0x44,0x1C,0x38,0x00,0x00},/*"S",51*/
{0x18,0x00,0x10,0x00,0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x00,0x18,0x00,0x00,0x00},/*"T",52*/
{0x10,0x00,0x1F,0xF8,0x10,0x04,0x00,0x04,0x00,0x04,0x10,0x04,0x1F,0xF8,0x10,0x00},/*"U",53*/
{0x10,0x00,0x1E,0x00,0x11,0xE0,0x00,0x1C,0x00,0x70,0x13,0x80,0x1C,0x00,0x10,0x00},/*"V",54*/
{0x1F,0xC0,0x10,0x3C,0x00,0xE0,0x1F,0x00,0x00,0xE0,0x10,0x3C,0x1F,0xC0,0x00,0x00},/*"W",55*/
{0x10,0x04,0x18,0x0C,0x16,0x34,0x01,0xC0,0x01,0xC0,0x16,0x34,0x18,0x0C,0x10,0x04},/*"X",56*/
{0x10,0x00,0x1C,0x00,0x13,0x04,0x00,0xFC,0x13,0x04,0x1C,0x00,0x10,0x00,0x00,0x00},/*"Y",57*/
{0x08,0x04,0x10,0x1C,0x10,0x64,0x10,0x84,0x13,0x04,0x1C,0x04,0x10,0x18,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x40,0x02,0x40,0x02,0x40,0x02,0x00,0x00},/*"[",59*/
{0x00,0x00,0x30,0x00,0x0C,0x00,0x03,0x80,0x00,0x60,0x00,0x1C,0x00,0x03,0x00,0x00},/*"\",60*/
{0x00,0x00,0x40,0x02,0x40,0x02,0x40,0x02,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00},/*"^",62*/
{0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01},/*"_",63*/
{0x00,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x98,0x01,0x24,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xFC,0x00,0x04},/*"a",65*/
{0x10,0x00,0x1F,0xFC,0x00,0x88,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x00},/*"c",67*/
{0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x11,0x08,0x1F,0xFC,0x00,0x04},/*"d",68*/
{0x00,0x00,0x00,0xF8,0x01,0x44,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xC8,0x00,0x00},/*"e",69*/
{0x00,0x00,0x01,0x04,0x01,0x04,0x0F,0xFC,0x11,0x04,0x11,0x04,0x11,0x00,0x18,0x00},/*"f",70*/
{0x00,0x00,0x00,0xD6,0x01,0x29,0x01,0x29,0x01,0x29,0x01,0xC9,0x01,0x06,0x00,0x00},/*"g",71*/
{0x10,0x04,0x1F,0xFC,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xFC,0x00,0x04},/*"h",72*/
{0x00,0x00,0x01,0x04,0x19,0x04,0x19,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x03,0x00,0x01,0x01,0x01,0x19,0x01,0x19,0xFE,0x00,0x00,0x00,0x00},/*"j",74*/
{0x10,0x04,0x1F,0xFC,0x00,0x24,0x00,0x40,0x01,0xB4,0x01,0x0C,0x01,0x04,0x00,0x00},/*"k",75*/
{0x00,0x00,0x10,0x04,0x10,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"l",76*/
{0x01,0x04,0x01,0xFC,0x01,0x04,0x01,0x00,0x01,0xFC,0x01,0x04,0x01,0x00,0x00,0xFC},/*"m",77*/
{0x01,0x04,0x01,0xFC,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xFC,0x00,0x04},/*"n",78*/
{0x00,0x00,0x00,0xF8,0x01,0x04,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0xF8,0x00,0x00},/*"o",79*/
{0x01,0x01,0x01,0xFF,0x00,0x85,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00},/*"p",80*/
{0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x05,0x01,0xFF,0x00,0x01},/*"q",81*/
{0x01,0x04,0x01,0x04,0x01,0xFC,0x00,0x84,0x01,0x04,0x01,0x00,0x01,0x80,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0xCC,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x98,0x00,0x00},/*"s",83*/
{0x00,0x00,0x01,0x00,0x01,0x00,0x07,0xF8,0x01,0x04,0x01,0x04,0x00,0x00,0x00,0x00},/*"t",84*/
{0x01,0x00,0x01,0xF8,0x00,0x04,0x00,0x04,0x00,0x04,0x01,0x08,0x01,0xFC,0x00,0x04},/*"u",85*/
{0x01,0x00,0x01,0x80,0x01,0x70,0x00,0x0C,0x00,0x10,0x01,0x60,0x01,0x80,0x01,0x00},/*"v",86*/
{0x01,0xF0,0x01,0x0C,0x00,0x30,0x01,0xC0,0x00,0x30,0x01,0x0C,0x01,0xF0,0x01,0x00},/*"w",87*/
{0x00,0x00,0x01,0x04,0x01,0x8C,0x00,0x74,0x01,0x70,0x01,0x8C,0x01,0x04,0x00,0x00},/*"x",88*/
{0x01,0x01,0x01,0x81,0x01,0x71,0x00,0x0E,0x00,0x18,0x01,0x60,0x01,0x80,0x01,0x00},/*"y",89*/
{0x00,0x00,0x01,0x84,0x01,0x0C,0x01,0x34,0x01,0x44,0x01,0x84,0x01,0x0C,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x3E,0xFC,0x40,0x02,0x40,0x02},/*"{",91*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},/*"|",92*/
{0x00,0x00,0x40,0x02,0x40,0x02,0x3E,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
{0x00,0x00,0x60,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x20,0x00},/*"~",94*/
};      

const unsigned char oled_CH_1616[][12]={	
/////////////////////////////////////////////////////////////	
 //脱(0) 机(1) 烧(2) 录(3) 器(4)

{0x00,0x00,0x00,0x10,0x7F,0xE0,0x49,0x10,0x7F,0xF0,0x00,0x10},
{0x9E,0x20,0x53,0xC0,0x12,0x00,0x53,0xE0,0x9E,0x10,0x00,0x30},/*"脱",0*/

{0x00,0x00,0x11,0x00,0x16,0x00,0xFF,0xF0,0x14,0x10,0x02,0x20},
{0x7F,0xC0,0x40,0x00,0x40,0x00,0x7F,0xE0,0x00,0x10,0x00,0x70},/*"机",1*/

{0x00,0x00,0x1E,0x10,0x00,0x60,0xFF,0x80,0x10,0x60,0x21,0x10},
{0x25,0x20,0xF5,0xC0,0x49,0x00,0x55,0xE0,0x45,0x10,0x1D,0x30},/*"烧",2*/

{0x00,0x00,0x08,0x20,0x8A,0x20,0xA9,0x40,0xA8,0x80,0xA9,0x10},
{0xAF,0xF0,0xA9,0x00,0xA8,0x80,0xF9,0x40,0x0A,0x20,0x08,0x20},/*"录",3*/

{0x00,0x00,0x04,0x80,0xE4,0xF0,0xA5,0x50,0xA5,0x50,0xE6,0x70},
{0x1C,0x00,0xE6,0x70,0xA5,0x50,0xB5,0x50,0xEC,0xF0,0x04,0x80},/*"器",4*/



////潍坊科技学院
//{0x88,0x20,0x44,0x40,0x3B,0x20,0xCD,0x20,0x11,0x40,0x08,0x00},
//{0x3F,0xF0,0xE4,0x90,0x3F,0xF0,0xA4,0x90,0x24,0x90,0x00,0x00},/*"?",0*/

//{0x08,0x20,0x08,0x20,0xFF,0xC0,0x08,0x40,0x20,0x10,0x20,0x60},
//{0xBF,0x80,0x64,0x00,0x24,0x10,0x24,0x10,0x27,0xE0,0x00,0x00},/*"?",1*/

//{0x48,0x80,0x4B,0x00,0x7F,0xF0,0x8A,0x00,0x09,0x00,0x48,0x80},
//{0x24,0x80,0x00,0x80,0xFF,0xF0,0x01,0x00,0x01,0x00,0x00,0x00},/*"?",2*/

//{0x11,0x00,0x11,0x10,0xFF,0xF0,0x12,0x00,0x24,0x10,0x27,0x10},
//{0x24,0xA0,0xFC,0x40,0x24,0xA0,0x27,0x10,0x20,0x10,0x00,0x00},/*"?",3*/

//{0x31,0x00,0xA1,0x00,0x69,0x00,0x29,0x10,0xA9,0x10,0x69,0xF0},
//{0x2B,0x00,0x2D,0x00,0x69,0x00,0xA1,0x00,0x31,0x00,0x00,0x00},/*"?",4*/

//{0x7F,0xF0,0x48,0x80,0x77,0x00,0x00,0x00,0x31,0x10,0x25,0x20},
//{0xA5,0xC0,0x65,0x00,0x25,0xE0,0x25,0x10,0x31,0x30,0x00,0x00},/*"?",5*/

/////////////////////////////////////////////////////////////	
//信号图标
{0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x80,0x09,0x00,0x06,0x00},
{0x06,0x00,0x09,0x00,0x10,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"x   ",0*/

{0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"一竖",1*/

{0x00,0x00,0x00,0x30,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"两竖",2*/

{0x00,0x00,0x00,0x30,0x00,0x00,0x00,0xF0,0x00,0x00,0x03,0xF0},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"三竖",3*/

{0x00,0x00,0x00,0x30,0x00,0x00,0x00,0xF0,0x00,0x00,0x03,0xF0},
{0x00,0x00,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"四竖",4*/

{0x00,0x00,0x00,0x30,0x00,0x00,0x00,0xF0,0x00,0x00,0x03,0xF0},
{0x00,0x00,0x0F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x00},/*"五竖",5*/
/////////////////////////////////////////////////////////////	
//进度条
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//6

{0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//7

{0x7F,0xE0,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//8

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//9

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//10

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//11

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//12

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},
{0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//13

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},
{0x7F,0xE0,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//14

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},
{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},//15

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},
{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x00,0x00,0x00,0x00},//16

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},
{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x00,0x00},//17

{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},
{0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0,0x7F,0xE0},//18
/////////////////////////////////////////////////////////////	
//电灯图标
{0x00,0x00,0x00,0x00,0x4C,0x00,0x2A,0x00,0x09,0xE0,0x28,0x20},
{0x28,0x20,0x09,0xE0,0x2A,0x00,0x4C,0x00,0x00,0x00,0x00,0x00},/*"开",19*/

{0x00,0x00,0x40,0x20,0x26,0x40,0x15,0x80,0x0D,0xE0,0x16,0x20},
{0x16,0x20,0x0D,0xE0,0x15,0x80,0x26,0x40,0x40,0x20,0x00,0x00},/*"关",20*/

};


const unsigned char oled_CH0[][12]={	
// 选(0) 择(1) 下(2) 载(3) 算(4) 法(5)

{0x00,0x00,0x08,0x10,0x88,0x20,0x4F,0xC0,0x00,0x20,0x14,0x50},
{0x64,0x90,0x27,0x10,0xFC,0x10,0x27,0x90,0x24,0x50,0x04,0xD0},/*"选",0*/

{0x00,0x00,0x11,0x00,0x11,0x10,0xFF,0xF0,0x12,0x00,0x84,0x40},
{0xC5,0x40,0xA9,0x40,0x97,0xF0,0xA9,0x40,0xC5,0x40,0x04,0x40},/*"择",1*/

{0x00,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0xF0},
{0x40,0x00,0x48,0x00,0x44,0x00,0x42,0x00,0x41,0x80,0x40,0x00},/*"下",2*/

{0x00,0x00,0x14,0x20,0x57,0x20,0x5D,0x20,0xF7,0xF0,0x55,0x40},
{0x55,0x40,0x10,0x10,0xFF,0x20,0x10,0xC0,0x97,0x20,0x50,0x70},/*"载",3*/

{0x00,0x00,0x20,0x40,0xC0,0x40,0x5F,0xD0,0x75,0x60,0x55,0x40},
{0x15,0x40,0x35,0x40,0xD5,0x70,0x5F,0xC0,0x60,0x40,0x40,0x40},/*"算",4*/

{0x08,0x20,0x84,0x40,0x42,0x80,0x12,0x20,0x12,0x60,0x13,0xA0},
{0xFE,0x20,0x12,0x20,0x12,0xA0,0x12,0x60,0x02,0x30,0x00,0x00},/*"法",5*/

};


const unsigned char oled_CH1[][12]={
// 选(0) 择(1) 下(2) 载(3) 文(4) 件(5)

{0x00,0x00,0x08,0x10,0x88,0x20,0x4F,0xC0,0x00,0x20,0x14,0x50},
{0x64,0x90,0x27,0x10,0xFC,0x10,0x27,0x90,0x24,0x50,0x04,0xD0},/*"选",0*/

{0x00,0x00,0x11,0x00,0x11,0x10,0xFF,0xF0,0x12,0x00,0x84,0x40},
{0xC5,0x40,0xA9,0x40,0x97,0xF0,0xA9,0x40,0xC5,0x40,0x04,0x40},/*"择",1*/

{0x00,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0xF0},
{0x40,0x00,0x48,0x00,0x44,0x00,0x42,0x00,0x41,0x80,0x40,0x00},/*"下",2*/

{0x00,0x00,0x14,0x20,0x57,0x20,0x5D,0x20,0xF7,0xF0,0x55,0x40},
{0x55,0x40,0x10,0x10,0xFF,0x20,0x10,0xC0,0x97,0x20,0x50,0x70},/*"载",3*/

{0x00,0x00,0x20,0x10,0x20,0x10,0x38,0x20,0x26,0x20,0xA1,0x40},
{0x60,0x80,0x21,0x40,0x26,0x20,0x38,0x20,0x20,0x10,0x20,0x10},/*"文",4*/

{0x08,0x00,0x3F,0xF0,0xC0,0x00,0x09,0x00,0x71,0x00,0x11,0x00},
{0x11,0x00,0xFF,0xF0,0x11,0x00,0x11,0x00,0x11,0x00,0x00,0x00},/*"件",5*/

};
//抛飞模式：
const unsigned char oled_CH2[][12]={	
// 自(0) 动(1) 下(2) 载(3) 模(4) 式(5)

{0x00,0x00,0x00,0x00,0x3F,0xF0,0x24,0x90,0x24,0x90,0x64,0x90},
{0xA4,0x90,0x24,0x90,0x24,0x90,0x24,0x90,0x3F,0xF0,0x00,0x00},/*"自",0*/

{0x00,0x00,0x08,0xC0,0x4B,0x40,0x4C,0x40,0x49,0x40,0x08,0xC0},
{0x00,0x10,0x10,0x60,0xFF,0x80,0x10,0x10,0x10,0x10,0x1F,0xE0},/*"动",1*/

{0x00,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0xF0},
{0x40,0x00,0x48,0x00,0x44,0x00,0x42,0x00,0x41,0x80,0x40,0x00},/*"下",2*/

{0x00,0x00,0x14,0x20,0x57,0x20,0x5D,0x20,0xF7,0xF0,0x55,0x40},
{0x55,0x40,0x10,0x10,0xFF,0x20,0x10,0xC0,0x97,0x20,0x50,0x70},/*"载",3*/

{0x00,0x00,0x11,0x00,0x16,0x00,0xFF,0xF0,0x12,0x00,0x40,0x50},
{0x5F,0x50,0xF5,0x60,0x55,0xC0,0xF5,0x60,0x5F,0x50,0x40,0x50},/*"模",4*/

{0x10,0x10,0x12,0x10,0x12,0x10,0x13,0xE0,0x12,0x20,0x12,0x20},
{0x10,0x20,0xFF,0x00,0x10,0xC0,0x90,0x20,0x50,0x70,0x00,0x00},/*"式",5*/

};

const unsigned char oled_CH3[][12]={
// 开(0) 始(1) 烧(2) 录(3)

{0x00,0x00,0x02,0x00,0x42,0x10,0x42,0x60,0x7F,0x80,0x42,0x00},
{0x42,0x00,0x42,0x00,0x7F,0xF0,0x42,0x00,0x42,0x00,0x02,0x00},/*"开",0*/

{0x00,0x00,0x11,0x10,0x1E,0xA0,0xF0,0x40,0x1F,0xB0,0x00,0x00},
{0x1B,0xF0,0x2A,0x20,0xCA,0x20,0x0A,0x20,0x1B,0xF0,0x0C,0x00},/*"始",1*/

{0x00,0x00,0x1E,0x10,0x00,0x60,0xFF,0x80,0x10,0x60,0x21,0x10},
{0x25,0x20,0xF5,0xC0,0x49,0x00,0x55,0xE0,0x45,0x10,0x1D,0x30},/*"烧",2*/

{0x00,0x00,0x08,0x20,0x8A,0x20,0xA9,0x40,0xA8,0x80,0xA9,0x10},
{0xAF,0xF0,0xA9,0x00,0xA8,0x80,0xF9,0x40,0x0A,0x20,0x08,0x20},/*"录",3*/
};

//切换机头：
const unsigned char oled_CH4[][12]={
{0x08,0x00,0x08,0x00,0xFF,0xE0,0x10,0x40,0x10,0x90,0x40,0x20},
{0x40,0xC0,0x7F,0x00,0x40,0x10,0x40,0x10,0x7F,0xE0,0x00,0x00},/*"?",0*/

{0x11,0x00,0x11,0x10,0xFF,0xF0,0x12,0x00,0x10,0x90,0x2F,0xA0},
{0xC8,0xC0,0x5F,0x80,0x68,0xC0,0x0F,0xA0,0x00,0x90,0x00,0x00},/*"?",1*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x14,0x10,0x02,0x20,0x7F,0xC0},
{0x40,0x00,0x40,0x00,0x7F,0xE0,0x00,0x10,0x00,0x70,0x00,0x00},/*"?",2*/

{0x02,0x10,0x12,0x10,0x0A,0x20,0x42,0x20,0x22,0x40,0x03,0x80},
{0xFE,0x00,0x02,0x80,0x02,0x40,0x02,0x20,0x02,0x10,0x00,0x00},/*"?",3*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};
//传感器状态
const unsigned char oled_CH5[][12]={
{0x04,0x00,0x08,0x00,0x3F,0xF0,0xC4,0x00,0x24,0x00,0x27,0x40},
{0x3D,0x40,0xE5,0x20,0x25,0x60,0x25,0x90,0x04,0x00,0x00,0x00},/*"?",0*/

{0x00,0x90,0x7F,0x60,0x40,0x00,0x57,0x60,0x55,0x10,0x57,0x50},
{0x40,0xB0,0xF9,0x10,0x46,0x30,0xD9,0x40,0x43,0xB0,0x00,0x00},/*"?",1*/

{0x04,0x80,0xE4,0xF0,0xA5,0x50,0xA5,0x50,0xE6,0x70,0x1C,0x00},
{0xE6,0x70,0xA5,0x50,0xB5,0x50,0xEC,0xF0,0x04,0x80,0x00,0x00},/*"?",2*/

{0x20,0x80,0x11,0x00,0xFF,0xF0,0x00,0x00,0x08,0x10,0x08,0x60},
{0x0B,0x80,0xFC,0x00,0x0B,0x80,0x48,0x60,0x28,0x10,0x00,0x00},/*"?",3*/

{0x22,0x20,0x22,0xC0,0x24,0x00,0x28,0xE0,0x30,0x10,0xE5,0x10},
{0x32,0xD0,0x28,0x10,0x24,0x30,0x22,0x80,0x22,0x60,0x00,0x00},/*"?",4*/
};

//陀螺仪:
const unsigned char oled_CH6[][12]={
{0x7F,0xF0,0x40,0x40,0x4C,0x40,0x73,0x80,0x00,0x00,0x30,0x00},
{0x27,0xE0,0xA0,0x90,0x61,0x10,0x22,0x10,0x34,0x70,0x00,0x00},/*"?",0*/

{0x1E,0x20,0x12,0x20,0xFF,0xC0,0x12,0x40,0x1E,0xE0,0x00,0x10},
{0xFA,0xA0,0xAF,0x90,0xFA,0xF0,0xAC,0xA0,0xF9,0x90,0x00,0x00},/*"?",1*/

{0x04,0x00,0x08,0x00,0x3F,0xF0,0xC0,0x00,0x18,0x10,0x06,0x20},
{0x81,0x40,0x60,0x80,0x01,0x40,0x06,0x20,0x38,0x10,0x00,0x00},/*"?",2*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",3*/
};
//气压计：
const unsigned char oled_CH7[][12]={
{0x10,0x00,0x24,0x00,0xD4,0x00,0x54,0x00,0x54,0x00,0x54,0x00},
{0x54,0x00,0x54,0x00,0x57,0xC0,0x50,0x20,0x40,0x70,0x00,0x00},/*"?",0*/

{0x00,0x10,0x7F,0xE0,0x40,0x10,0x42,0x10,0x42,0x10,0x42,0x10},
{0x5F,0xF0,0x42,0x10,0x42,0x90,0x42,0x50,0x40,0x10,0x00,0x00},/*"?",1*/

{0x08,0x00,0x88,0x00,0x4F,0xE0,0x00,0x40,0x04,0x80,0x04,0x00},
{0x04,0x00,0xFF,0xF0,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00},/*"?",2*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",3*/	
};
//无线模块：
const unsigned char oled_CH8[][12]={
{0x04,0x10,0x44,0x20,0x44,0x40,0x44,0x80,0x47,0x00,0x7C,0x00},
{0x47,0xE0,0x44,0x10,0x44,0x10,0x44,0x10,0x04,0x70,0x00,0x00},/*"?",0*/

{0x19,0x20,0x2B,0x20,0xCD,0x40,0x11,0x40,0x00,0x10,0x12,0x10},
{0x12,0x20,0xFF,0xC0,0x24,0xA0,0xA5,0x10,0x64,0x70,0x00,0x00},/*"?",1*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x12,0x00,0x40,0x50,0x5F,0x50},
{0xF5,0x60,0x55,0xC0,0xF5,0x60,0x5F,0x50,0x40,0x50,0x00,0x00},/*"?",2*/

{0x10,0x40,0xFF,0xC0,0x10,0x80,0x02,0x10,0x22,0x20,0x22,0xC0},
{0xFF,0x00,0x22,0xC0,0x22,0x20,0x3E,0x10,0x02,0x10,0x00,0x00},/*"?",3*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};
//超声波模块
const unsigned char oled_CH9[][12]={
{0x04,0x10,0x25,0xE0,0x24,0x20,0xFF,0xF0,0x24,0x90,0x04,0x90},
{0x4B,0xD0,0x72,0x50,0x42,0x50,0x4A,0x50,0x7B,0xD0,0x00,0x00},/*"?",0*/

{0x40,0x10,0x57,0xE0,0x54,0x80,0x54,0x80,0x54,0x80,0xF7,0x80},
{0x54,0x80,0x54,0x80,0x54,0x80,0x57,0xC0,0x40,0x00,0x00,0x00},/*"?",1*/

{0x44,0x20,0x22,0x40,0x00,0x10,0x3F,0xE0,0x24,0x10,0x27,0x10},
{0x24,0xA0,0xFC,0x40,0x24,0xA0,0x27,0x10,0x30,0x10,0x00,0x00},/*"?",2*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x12,0x00,0x40,0x50,0x5F,0x50},
{0xF5,0x60,0x55,0xC0,0xF5,0x60,0x5F,0x50,0x40,0x50,0x00,0x00},/*"?",3*/

{0x10,0x40,0xFF,0xC0,0x10,0x80,0x02,0x10,0x22,0x20,0x22,0xC0},
{0xFF,0x00,0x22,0xC0,0x22,0x20,0x3E,0x10,0x02,0x10,0x00,0x00},/*"?",4*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",5*/
};
//正常
const unsigned char oled_CH10[][12]={
{0x00,0x10,0x40,0x10,0x47,0xF0,0x40,0x10,0x40,0x10,0x7F,0xF0},
{0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x00,0x10,0x00,0x00},/*"?",0*/

{0x30,0x00,0x20,0xE0,0xAE,0x80,0x6A,0x80,0x2A,0x80,0xEB,0xF0},
{0x2A,0x80,0x6A,0x80,0xAE,0xA0,0x20,0xE0,0x30,0x00,0x00,0x00},/*"?",1*/
};
//错误
const unsigned char oled_CH11[][12]={
{0x19,0x00,0xEF,0xF0,0x29,0x20,0x21,0x40,0x08,0x00,0x2B,0xF0},
{0xFA,0xA0,0x2A,0xA0,0x2A,0xA0,0xFA,0xA0,0x2B,0xF0,0x00,0x00},/*"?",0*/

{0x88,0x00,0x4F,0xE0,0x01,0x40,0x05,0x10,0xF5,0x20,0x95,0x40},
{0x97,0x80,0x95,0x40,0xF5,0x20,0x05,0x10,0x01,0x10,0x00,0x00},/*"?",1*/
};
//是
const unsigned char oled_CH12[][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"?",0*/

{0x02,0x10,0x02,0x20,0xFA,0xC0,0xAA,0x20,0xAA,0x10,0xAB,0xF0},
{0xAA,0x90,0xAA,0x90,0xFA,0x90,0x02,0x90,0x02,0x10,0x00,0x00},/*"?",0*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"?",0*/

};
//否
const unsigned char oled_CH13[][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"?",0*/

{0x88,0x00,0x89,0xF0,0x91,0x20,0x91,0x20,0xA1,0x20,0xFD,0x20},
{0x81,0x20,0xA1,0x20,0xA1,0x20,0x91,0xF0,0x88,0x00,0x00,0x00},/*"?",0*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"?",0*/
};
//视觉定位：
const unsigned char oled_CH14[][12]={
{0x21,0x00,0xA2,0x00,0x6F,0xF0,0x34,0x00,0x02,0x10,0x7F,0x20},
{0x40,0xC0,0x5F,0x00,0x40,0xE0,0x7F,0x10,0x00,0x30,0x00,0x00},/*"?",0*/

{0x38,0x10,0xA0,0x10,0x6F,0xA0,0x28,0x20,0xA8,0x40,0x6B,0x80},
{0x28,0x60,0x28,0x10,0x6F,0x90,0xA0,0x10,0x38,0x30,0x00,0x00},/*"?",1*/

{0x34,0x10,0x24,0x20,0x25,0xC0,0x24,0x20,0xA4,0x10,0x67,0xF0},
{0x24,0x90,0x24,0x90,0x24,0x90,0x24,0x90,0x34,0x10,0x00,0x00},/*"?",2*/

{0x08,0x00,0x3F,0xF0,0xC0,0x00,0x10,0x10,0x16,0x10,0x11,0xD0},
{0x90,0x10,0x50,0x30,0x10,0xD0,0x17,0x10,0x10,0x10,0x00,0x00},/*"?",3*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};

const unsigned char oled_CH15[][12]={
{0x21,0x00,0xA2,0x00,0x6F,0xF0,0x34,0x00,0x02,0x10,0x7F,0x20},
{0x40,0xC0,0x5F,0x00,0x40,0xE0,0x7F,0x10,0x00,0x30,0x00,0x00},/*"?",0*/

{0x38,0x10,0xA0,0x10,0x6F,0xA0,0x28,0x20,0xA8,0x40,0x6B,0x80},
{0x28,0x60,0x28,0x10,0x6F,0x90,0xA0,0x10,0x38,0x30,0x00,0x00},/*"?",1*/

{0x34,0x10,0x24,0x20,0x25,0xC0,0x24,0x20,0xA4,0x10,0x67,0xF0},
{0x24,0x90,0x24,0x90,0x24,0x90,0x24,0x90,0x34,0x10,0x00,0x00},/*"?",2*/

{0x08,0x00,0x3F,0xF0,0xC0,0x00,0x10,0x10,0x16,0x10,0x11,0xD0},
{0x90,0x10,0x50,0x30,0x10,0xD0,0x17,0x10,0x10,0x10,0x00,0x00},/*"?",3*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x12,0x00,0x40,0x50,0x5F,0x50},
{0xF5,0x60,0x55,0xC0,0xF5,0x60,0x5F,0x50,0x40,0x50,0x00,0x00},/*"?",4*/

{0x10,0x40,0xFF,0xC0,0x10,0x80,0x02,0x10,0x22,0x20,0x22,0xC0},
{0xFF,0x00,0x22,0xC0,0x22,0x20,0x3E,0x10,0x02,0x10,0x00,0x00},/*"?",5*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",6*/
};

//遥控电压低
const unsigned char oled_CH16[][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

{0x88,0x10,0x4F,0xE0,0x00,0x10,0x42,0x10,0x66,0xD0,0x5A,0x50},
{0x6A,0x50,0x5F,0xD0,0x8A,0x50,0x9A,0x50,0xA2,0xD0,0x00,0x00},/*"?",0*/

{0x11,0x10,0xFF,0xF0,0x12,0x00,0x00,0x00,0x32,0x10,0x25,0x10},
{0xA9,0x10,0x61,0xF0,0x29,0x10,0x25,0x10,0x32,0x10,0x00,0x00},/*"?",1*/

{0x3F,0xC0,0x24,0x80,0x24,0x80,0x24,0x80,0xFF,0xE0,0x24,0x90},
{0x24,0x90,0x24,0x90,0x3F,0x90,0x00,0x10,0x00,0x70,0x00,0x00},/*"?",2*/

{0x00,0x10,0x7F,0xE0,0x40,0x10,0x42,0x10,0x42,0x10,0x42,0x10},
{0x5F,0xF0,0x42,0x10,0x42,0x90,0x42,0x50,0x40,0x10,0x00,0x00},/*"?",3*/

{0x04,0x00,0x08,0x00,0x3F,0xF0,0xC0,0x00,0x7F,0xE0,0x44,0x40},
{0x44,0xA0,0x7F,0x10,0x84,0xC0,0x84,0x20,0x04,0xF0,0x00,0x00},/*"?",4*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};


//飞机电压低
const unsigned char oled_CH17[][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

{0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00},
{0x7E,0x00,0x09,0x80,0x14,0x40,0x22,0x20,0x00,0xF0,0x00,0x00},/*"?",0*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x14,0x10,0x02,0x20,0x7F,0xC0},
{0x40,0x00,0x40,0x00,0x7F,0xE0,0x00,0x10,0x00,0x70,0x00,0x00},/*"?",1*/

{0x3F,0xC0,0x24,0x80,0x24,0x80,0x24,0x80,0xFF,0xE0,0x24,0x90},
{0x24,0x90,0x24,0x90,0x3F,0x90,0x00,0x10,0x00,0x70,0x00,0x00},/*"?",2*/

{0x00,0x10,0x7F,0xE0,0x40,0x10,0x42,0x10,0x42,0x10,0x42,0x10},
{0x5F,0xF0,0x42,0x10,0x42,0x90,0x42,0x50,0x40,0x10,0x00,0x00},/*"?",3*/

{0x04,0x00,0x08,0x00,0x3F,0xF0,0xC0,0x00,0x7F,0xE0,0x44,0x40},
{0x44,0xA0,0x7F,0x10,0x84,0xC0,0x84,0x20,0x04,0xF0,0x00,0x00},/*"?",4*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};

//光流定点：
const unsigned char oled_CH18[][12]={
{0x04,0x10,0x44,0x20,0x24,0x40,0x17,0x80,0x04,0x00,0xFC,0x00},
{0x04,0x00,0x17,0xE0,0x24,0x10,0x44,0x10,0x04,0x70,0x00,0x00},/*"?",0*/

{0x44,0x20,0x22,0x40,0x00,0x10,0x24,0x20,0x2D,0xC0,0x34,0x00},
{0xA5,0xF0,0x64,0x00,0x25,0xE0,0x2C,0x10,0x26,0x70,0x00,0x00},/*"?",1*/

{0x34,0x10,0x24,0x20,0x25,0xC0,0x24,0x20,0xA4,0x10,0x67,0xF0},
{0x24,0x90,0x24,0x90,0x24,0x90,0x24,0x90,0x34,0x10,0x00,0x00},/*"?",2*/

{0x00,0x10,0x0F,0xA0,0x08,0x80,0x08,0xA0,0x08,0x90,0xF8,0x80},
{0x48,0xA0,0x48,0x90,0x48,0x80,0x4F,0xA0,0x40,0x10,0x00,0x00},/*"?",3*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};

//光流模块：
const unsigned char oled_CH19[][12]={
{0x04,0x10,0x44,0x20,0x24,0x40,0x17,0x80,0x04,0x00,0xFC,0x00},
{0x04,0x00,0x17,0xE0,0x24,0x10,0x44,0x10,0x04,0x70,0x00,0x00},/*"?",0*/

{0x44,0x20,0x22,0x40,0x00,0x10,0x24,0x20,0x2D,0xC0,0x34,0x00},
{0xA5,0xF0,0x64,0x00,0x25,0xE0,0x2C,0x10,0x26,0x70,0x00,0x00},/*"?",1*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x12,0x00,0x40,0x50,0x5F,0x50},
{0xF5,0x60,0x55,0xC0,0xF5,0x60,0x5F,0x50,0x40,0x50,0x00,0x00},/*"?",2*/

{0x10,0x40,0xFF,0xC0,0x10,0x80,0x02,0x10,0x22,0x20,0x22,0xC0},
{0xFF,0x00,0x22,0xC0,0x22,0x20,0x3E,0x10,0x02,0x10,0x00,0x00},/*"?",3*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};

//锁尾模式
const unsigned char oled_CH20[][12]={
{0x29,0x00,0xCF,0xF0,0x49,0x20,0x00,0x10,0x4F,0x90,0x28,0x20},
{0x08,0x40,0xFB,0x80,0x08,0x40,0x28,0x20,0x4F,0x90,0x00,0x00},/*"?",0*/

{0x00,0x10,0xFF,0xE0,0xA0,0x40,0xA5,0x40,0xA5,0x40,0xA5,0x40},
{0xA7,0xE0,0xAA,0x90,0xAA,0x90,0xA8,0x90,0xE0,0x30,0x00,0x00},/*"?",1*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x12,0x00,0x40,0x50,0x5F,0x50},
{0xF5,0x60,0x55,0xC0,0xF5,0x60,0x5F,0x50,0x40,0x50,0x00,0x00},/*"?",2*/

{0x10,0x10,0x12,0x10,0x12,0x10,0x13,0xE0,0x12,0x20,0x12,0x20},
{0x10,0x20,0xFF,0x00,0x10,0xC0,0x90,0x20,0x50,0x70,0x00,0x00},/*"?",3*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};

//设置成功
const unsigned char oled_CH21[][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/

{0x08,0x00,0x88,0x00,0x4F,0xE0,0x00,0x40,0x0A,0x10,0xF3,0x10},
{0x82,0xA0,0x82,0x40,0xF2,0xA0,0x0B,0x10,0x08,0x10,0x00,0x00},/*"?",0*/

{0x08,0x10,0xE8,0x10,0xAB,0xF0,0xAA,0x10,0xEA,0x10,0xBE,0x70},
{0xEA,0x10,0xAA,0x10,0xAB,0xF0,0xE8,0x10,0x08,0x10,0x00,0x00},/*"?",1*/

{0x00,0x10,0x3F,0xE0,0x24,0x00,0x24,0x40,0x27,0xD0,0x20,0x20},
{0xFF,0x40,0x20,0x80,0xA1,0x40,0x66,0x20,0x20,0xF0,0x00,0x00},/*"?",4*/

{0x20,0x40,0x20,0x40,0x3F,0x80,0x20,0x90,0x20,0xA0,0x10,0xC0},
{0xFF,0x00,0x10,0x00,0x10,0x10,0x10,0x10,0x1F,0xE0,0x00,0x00},/*"?",5*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};

//设置失败
const unsigned char oled_CH22[][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/

{0x08,0x00,0x88,0x00,0x4F,0xE0,0x00,0x40,0x0A,0x10,0xF3,0x10},
{0x82,0xA0,0x82,0x40,0xF2,0xA0,0x0B,0x10,0x08,0x10,0x00,0x00},/*"?",1*/

{0x08,0x10,0xE8,0x10,0xAB,0xF0,0xAA,0x10,0xEA,0x10,0xBE,0x70},
{0xEA,0x10,0xAA,0x10,0xAB,0xF0,0xE8,0x10,0x08,0x10,0x00,0x00},/*"?",2*/

{0x05,0x10,0x09,0x10,0x71,0x20,0x11,0x40,0x11,0x80,0xFF,0x00},
{0x11,0x80,0x11,0x40,0x11,0x20,0x01,0x10,0x01,0x10,0x00,0x00},/*"?",3*/

{0x7F,0x90,0x40,0x20,0x5F,0xC0,0x40,0x20,0x7F,0x90,0x08,0x10},
{0x37,0xA0,0xD0,0x40,0x10,0xA0,0x1F,0x10,0x10,0x10,0x00,0x00},/*"?",4*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",4*/
};

//指南针：
const unsigned char oled_CH23[][12]={
{0x11,0x00,0x11,0x10,0xFF,0xF0,0x12,0x00,0x00,0x00,0xF3,0xF0},
{0x2A,0xA0,0x2A,0xA0,0x4A,0xA0,0x4A,0xA0,0x9B,0xF0,0x00,0x00},/*"?",0*/

{0x40,0x00,0x5F,0xF0,0x50,0x80,0x5A,0x80,0x56,0x80,0xF3,0xE0},
{0x56,0x80,0x5A,0x90,0x50,0x90,0x5F,0xF0,0x40,0x00,0x00,0x00},/*"?",1*/

{0x11,0x00,0xE9,0x00,0x2F,0xF0,0x29,0x20,0x29,0x40,0x04,0x00},
{0x04,0x00,0xFF,0xF0,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00},/*"?",2*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",3*/
};

//指南针异常
const unsigned char oled_CH24[][12]={
{0x11,0x00,0x11,0x10,0xFF,0xF0,0x12,0x00,0x00,0x00,0xF3,0xF0},
{0x2A,0xA0,0x2A,0xA0,0x4A,0xA0,0x4A,0xA0,0x9B,0xF0,0x00,0x00},/*"?",0*/

{0x40,0x00,0x5F,0xF0,0x50,0x80,0x5A,0x80,0x56,0x80,0xF3,0xE0},
{0x56,0x80,0x5A,0x90,0x50,0x90,0x5F,0xF0,0x40,0x00,0x00,0x00},/*"?",1*/

{0x11,0x00,0xE9,0x00,0x2F,0xF0,0x29,0x20,0x29,0x40,0x04,0x00},
{0x04,0x00,0xFF,0xF0,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00},/*"?",2*/

{0x00,0x80,0xF8,0x90,0xA4,0xA0,0xA7,0xC0,0xA4,0x80,0xA4,0x80},
{0xA4,0x80,0xA4,0x80,0xA7,0xF0,0xE4,0x80,0x0C,0x80,0x00,0x00},/*"?",3*/

{0x30,0x00,0x20,0xE0,0xAE,0x80,0x6A,0x80,0x2A,0x80,0xEB,0xF0},
{0x2A,0x80,0x6A,0x80,0xAE,0xA0,0x20,0xE0,0x30,0x00,0x00,0x00},/*"?",4*/

{0x00,0x00,0x00,0x00,0x7C,0xC0,0x7C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",5*/
};

//GPS模块：
const unsigned char oled_CH25[][12]={
{0x0F,0x00,0x10,0x80,0x20,0x40,0x22,0x40,0x33,0x80,0x02,0x00},/*"G",0*/

{0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"P",1*/

{0x18,0xC0,0x24,0x40,0x24,0x40,0x22,0x40,0x31,0x80,0x00,0x00},/*"S",2*/

{0x11,0x00,0x16,0x00,0xFF,0xF0,0x12,0x00,0x40,0x50,0x5F,0x50},
{0xF5,0x60,0x55,0xC0,0xF5,0x60,0x5F,0x50,0x40,0x50,0x00,0x00},/*"?",3*/

{0x10,0x40,0xFF,0xC0,0x10,0x80,0x02,0x10,0x22,0x20,0x22,0xC0},
{0xFF,0x00,0x22,0xC0,0x22,0x20,0x3E,0x10,0x02,0x10,0x00,0x00},/*"?",4*/

{0x00,0x00,0x00,0x00,0x0C,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",5*/
};

////
//const unsigned char oled_CH26[][12]={

//};

////
//const unsigned char oled_CH27[][12]={

//};


