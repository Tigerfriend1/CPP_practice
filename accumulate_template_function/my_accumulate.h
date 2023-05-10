//
// Created by 김태경 on 2023/05/10.
//

#ifndef ACCUMULATE_TEMPLATE_FUNCTION_MY_ACCUMULATE_H
#define ACCUMULATE_TEMPLATE_FUNCTION_MY_ACCUMULATE_H

template<typename T, typename U>
U my_accumulate(T _begin, T _end, U init){
    for (auto it=_begin; it!=_end; it++){
        init+=*it;
    }
    return init;
}

#endif //ACCUMULATE_TEMPLATE_FUNCTION_MY_ACCUMULATE_H
