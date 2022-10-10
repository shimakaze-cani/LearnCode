#define DEBUG //打印开关

void __attribute__((format(printf,1,2))) LOG(char *fmt,...)
{
    #ifdef DEBUG
        va_list args;
        va_start(args,fmt);
        vprintf(fmt,args);
        va_end(args);
    #endif
}

int main(void)
{
    int num = 4;
    LOG("I'm cani, I have %d letter\n", num);
    return 0;
}