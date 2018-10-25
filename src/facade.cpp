
#include "facade.h"
#include "system.h"


Facade::Facade() {
    m_sysone = std::make_shared<SubSystemOne>();
    m_systwo = std::make_shared<SubSystemTwo>();
}


Facade::~Facade() {

}


void Facade::Operation() {
    m_sysone->Operation();
    m_systwo->Operation();

}