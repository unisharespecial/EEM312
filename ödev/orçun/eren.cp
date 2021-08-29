#line 1 "C:/Documents and Settings/deniz/Desktop/okul/eren.c"
int main()
{
 TRISB=0X00;
 PORTB=0X00;
 while(1){ PORTB=1;
 delay_ms(220);
 PORTB=2;
 delay_ms(220);
 PORTB=4;
 delay_ms(220);
 PORTB=8;
 delay_ms(220);
 PORTB=128;
 delay_ms(220);
 PORTB=64;
 delay_ms(220);
 PORTB=32;
 delay_ms(220);
 PORTB=16;
 delay_ms(220);
 }
 return 0;
 }
