#ifndef HARL_H
#define HARL_H


class Harl
{
    private:
        void debig(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);

}



#endif