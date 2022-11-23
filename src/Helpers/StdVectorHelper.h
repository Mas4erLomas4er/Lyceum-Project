<<<<<<< HEAD:src/Helpers/VectorHelper.h
<<<<<<< HEAD
#include "../Classes/Extractor.h"

class VectorHelper{

    public:
        static double dot_product(const vector<double> &a, const vector<double> &b);
        static double euclidian_norm(const vector<double> &a);
        static double cosine_similarity(const vector<double> &a, const vector<double> &b);
};
=======
#ifndef CMAKEPROJECT_VECTORHELPER_H
#define CMAKEPROJECT_VECTORHELPER_H
=======
#ifndef CMAKEPROJECT_STDVECTORHELPER_H
#define CMAKEPROJECT_STDVECTORHELPER_H
>>>>>>> e6f7f982b0bc2aa564599c5853abbf801712f5ed:src/Helpers/StdVectorHelper.h

#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class StdVectorHelper {

private:
    // Hide the constructor
    StdVectorHelper() = default;

public:

    template<class Type>
    static bool is_in_vector(const vector<Type> &vec, const Type &element);
};

template<class Type>
bool StdVectorHelper::is_in_vector(const vector<Type> &vec, const Type &element) {
    return find(vec.begin(), vec.end(), element) != vec.end();
}


<<<<<<< HEAD:src/Helpers/VectorHelper.h
#endif //CMAKEPROJECT_VECTORHELPER_H
>>>>>>> b5a1467c3b89d8fd2a0da14f41cde872215bf0ec
=======
#endif //CMAKEPROJECT_STDVECTORHELPER_H
>>>>>>> e6f7f982b0bc2aa564599c5853abbf801712f5ed:src/Helpers/StdVectorHelper.h