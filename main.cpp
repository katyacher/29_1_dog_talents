#include <iostream>
#include <string>
#include <vector>

class Talent{
public:
    virtual std::string getTalent() = 0;
};

class Swiming: virtual public Talent{
    std::string type = "Swim";
public: 
    virtual std::string getTalent(){
        return type;
    }
};

class Dancing: virtual public Talent{
    std::string type = "Dance";
public: 
    virtual std::string getTalent(){
        return type;
    }
};

class Counting: virtual public Talent{
    std::string type = "Count";
public: 
    virtual std::string getTalent(){
        return type;
    }
};

class Dog{
    std::string name;
    std::vector<Talent*> talents;
public: 
    Dog(std::string _name): name{_name}{};

    void addTalent(std::string type){
        if(type == "Dance"){
            Talent* dance = new Dancing();
            talents.push_back(dance);
        } else if (type == "Swim"){
            Talent* swim = new Swiming();
            talents.push_back(swim);
        } else if (type == "Count"){
            Talent* count = new Counting();
            talents.push_back(count);
        } else {
            std::cout << "Unknown talent" << std::endl;
        }
    }

    void show_talents(){
        std::cout << "This is " << name << " and it has some talents:" << std::endl;
        for(auto talent: talents){
            std::cout << "It can \"" <<  talent->getTalent() << "\"" << std::endl;
        }
    }
};


int main(int, char**){
    std::cout << "Hello, from 29_1_dog_talents!\n";

    Dog d("Steve");
    d.addTalent("Swim");
    d.addTalent("Dance");

    d.show_talents();

    return 0;
}
