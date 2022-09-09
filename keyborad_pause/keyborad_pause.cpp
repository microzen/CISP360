#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int get_ch()
{
    struct termios stored_termios, new_termios;
    int ch; //ASCII
    tcgetattr(STDIN_FILENO, &stored_termios); // GET: STDIN_FILENO = Standard input
    new_termios = stored_termios;
    new_termios.c_lflag &= ~(ICANON | ECHO); // Local modes = ICANON
    tcsetattr(STDIN_FILENO, TCSANOW, &new_termios); //SET: Immediate
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &stored_termios); // Original termios
    return ch;
}

int main(void)
{
    printf("'q' or 'esc' key to quit\n");
    int ch; //ASCII
    do
    {
        // loop your assignment code here 
        ch = get_ch();
        printf("key=%c, ASCII=%d\n", ch,ch); // Or cout<<c<<endl in C++
    } while (ch != 'q' && ch != 27); // Esc = 27, q = 113 in ASCII

    printf("End! with key '%c'\n",ch);
    return 0;
}