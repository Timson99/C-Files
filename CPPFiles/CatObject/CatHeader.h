#ifndef CAT_H_
#define CAT_H_

class Cat {
    
private: 
    bool happy;
    std::string name;
public:
    Cat(std::string nam);
    ~Cat();
    void speak();
    bool getHappy();
    void setHappy(bool happiness);
};

#endif