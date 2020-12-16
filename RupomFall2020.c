#include<util/delay.h>
#include<avr/io.h>

#define Rows PORTC //Pc0,pc1,pc2,pc3
#define Columns PIND //PD4,PD5,PD6

unsigned char upperNibble, keyCode, keyPressed,k,c[6];

char press_key()
{
    unsigned char i;
    DDRC = 0x0f;
    PORTC=0x0f;
    PORTD = 0xf0;
    k=1;
    while(k==1)
    {

        upperNibble = 0xff;

        for(i=0; i<4; i++)
        {
            _delay_ms(1);
            Rows = ~(0x01 << i);
            _delay_ms(1);
            upperNibble = Columns| 0x0f;

            if (upperNibble != 0xff)
            {
                _delay_ms(20); //key debouncing delay
                upperNibble = Columns | 0x0f;
                if(upperNibble == 0xff)
                    goto OUT;

                keyCode = (upperNibble & 0xf0) | (0x0f & ~(0x01 << i));

                while (upperNibble != 0xff)
                    upperNibble = Columns | 0x0f;

                _delay_ms(20); //key debouncing delay

                switch (keyCode)
                {
                case (0xee):
                    keyPressed = '1';
                    k=0;
                    break;
                case (0xed):
                    keyPressed = '4';
                    k=0;
                    break;
                case (0xeb):
                    keyPressed = '7';
                    k=0;
                    break;
                case (0xe7):
                    keyPressed = '*';
                    k=0;
                    break;
                case (0xde):
                    keyPressed = '2';
                    k=0;
                    break;
                case (0xdd):
                    keyPressed = '5';
                    k=0;
                    break;
                case (0xdb):
                    keyPressed = '8';
                    k=0;
                    break;
                case (0xd7):
                    keyPressed = '0';
                    k=0;
                    break;
                case (0xbe):
                    keyPressed = '3';
                    k=0;
                    break;
                case (0xbd):
                    keyPressed = '6';
                    k=0;
                    break;
                case (0xbb):
                    keyPressed = '9';
                    k=0;
                    break;
                case (0xb7):
                    keyPressed = '#';
                    k=0;
                    break;
                case (0x7e):
                    keyPressed = '/';
                    k=0;
                    break;
                case (0x7d):
                    keyPressed = 'X';
                    k=0;
                    break;
                case (0x7b):
                    keyPressed = '-';
                    k=0;
                    break;
                case (0x77):
                    keyPressed = '+';
                    k=0;
                    break;
                default :
                    keyPressed = 'X';
                    k=0;
                }
OUT:
                ;
            }
        }

    }
    return keyPressed;
}

void uart_init()
{

    UCSRC=(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);

    UCSRB=(1<<RXEN)|(1<<TXEN);

    UBRRL=0x33; // baud rate(51 for 9600)
}

void tx_data(unsigned char c)
{

    UDR=c;
    while(!(UCSRA & (1<<TXC)));
    UCSRA=(1<<TXC);
}

unsigned char rx_data()
{

    while ( !(UCSRA & (1<<RXC)) );
    UCSRA=(0<<RXC);
    return UDR;
}

void Tx_String(unsigned char *str)
{
    while(*str)
    {
        tx_data(*str);
        str++;
        _delay_ms(100);
    }

}

int main(void)
{
    uart_init();
    unsigned char x,y[4];

    int i,j=0;
    _delay_ms(100);

    while(1)
    {
        x=press_key();

        if((x)!='#')
        {

            y[j]=x;
            ++j;

        }
        else if(x=='#')
        {

            for (i=0; i<3; i++)
                tx_data(y[i]);
            _delay_ms(10);

        }

    }
}
