#ifndef SINGLETON_H
#define SINGLETON_H
/******************************************************************************
 * @brief      单例模式
 *****************************************************************************/
#include"global.h"

template<typename T>
class Signleton{
protected:
    Signleton()=default;
    Signleton(const Signleton<T>&)=delete;
    Signleton & operator=(const Signleton& st)=delete;
    static std::shared_ptr<T>_instance;
public:
    static std::shared_ptr<T>GetInstance(){
        static std::once_flag s_flag;
        std::call_once(s_flag,[&](){
            _instance=std::shared_ptr<T>(new T);
        });
        return _instance;
    }

    void PrintAddress(){
        std::cout<<_instance.get()<<std::endl;
    }

    ~Signleton(){
        std::cout<<"this is signleton destruct"<<std::endl;
    }

};

template<typename T>
std::shared_ptr<T>Signleton<T>::_instance=nullptr;




#endif // SINGLETON_H
