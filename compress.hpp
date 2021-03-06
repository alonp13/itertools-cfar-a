#include <iostream>
using namespace std;
namespace itertools {
    template<typename T,typename R> class compress {
        
        private:

            class iter {
                private:
                    int at;
                  //  R prev;
                public:
                    iter(int at) : at(at) /*,prev(0)*/{}
                    bool operator!=(iter const& other) const { return at != other.at; }
                    int const& operator*() const { return at/*+prev*/; }
                    iter& operator++() { /*prev += at;*/ ++at; return *this; }
            };

        const T& m_container1;
        const R& m_container2;
        public:
            compress(const T& container1,const R& container2): m_container1(container1),m_container2(container2)
             {
             }
            // template<typename K>
            // compress(K func,const T& container): m_container(container) {};

            iter begin() {
                return iter(0);
                }

            iter end() {
                return iter(2); 
                }

    };
};