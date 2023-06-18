//
// Created by 김태경 on 2023/06/16.
//

#include "Canawa.h"

void Canawa::doing(GPUList &gpuList) {
    if(searchCondition->checkCondition()){ //생성되면 value=1, 검색조건이 없으면 default=0
        if(sortedCondition->checkCondition()){ // 검색조건과 정렬조건을 모두 설정한 경우
            sortedCondition->sorted(searchCondition->search(gpuList)).printList();
        }
        else{ //검색조건은 있으나 정렬조건을 설정하지 않은 경우
            searchCondition->search(gpuList).printList();
        }
    }
    else {
        if(sortedCondition->checkCondition()){//검색조건을 설정하지 않고 정렬조건만 설정한 경우
            sortedCondition->sorted(gpuList).printList();
        }
        else{ //검색조건, 정렬조건 모두를 설정하지 않은 경우
            gpuList.printList();
        }

    }
}
