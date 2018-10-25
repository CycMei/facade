#ifndef FACADE_H
#define FACADE_H
#include <memory>


class SubSystemOne;
class SubSystemTwo;

class Facade {

private:
    std::shared_ptr<SubSystemOne> m_sysone;
    std::shared_ptr<SubSystemTwo> m_systwo;



public:
    Facade();
    ~Facade();
    void Operation();

};


#endif //FACADE_H