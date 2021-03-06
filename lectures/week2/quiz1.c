#include <stdio.h>

/*
    별찍기 1
    *
    **
    ***
    ****
    *****
*/

/*
    변수 실행 표 

    height | width      | 줄바꿈 실행 여부 
    0      | 0          | O
    1      | 0 1        | O
    2      | 0 1 2      | O
    3      | 0 1 2 3    | O
    4      | 0 1 2 3 4  | X
    
    end
*/

// 별찍는 부분을 함수로 따로 분리합니다. 
void printStar(int size){
    // 입력받은 size 변수의 값을 높이와 너비로 갖는 직각 삼각형을 출력합니다.
    for(int height = 0 ; height < size; height++){
        // 0부터 시작하여 size보다 작을때까지 반복됩니다. 
        // 매 루프마다 마지막 부분에서 줄바꿈을 해주기때문에 
        // 실질적으로 삼각형의 높이 부분을 담당한다고 말할 수 있습니다.
        for(int width = 0; width <= height; width++){
            // 0부터 시작하여 height보다 작을때까지 반복됩니다.
            // height는 0부터 count up되기 때문에 조건에서는 <가 아닌 <=을 사용합니다.
            // 위의 조건으로 외부의 for문이 실행된 후에는 별이 한번만 찍히지만
            // 외부 for문의 두번째 실행부터는 점점 조건이 커지게되며 위에서부터 
            // 너비가 점점 늘어나게되고 삼각형을 만들게 됩니다.
            printf("*");
        }
        if(height < size-1){ printf("\n"); }
        // 마지막 줄이 아닐때만 줄바꿈을 실행해,
        // 삼각형을 출력한 뒤에는 의미없는 줄바꿈을 생성하지 않습니다.
    }
}

int main(){
    printStar(5);
    return 0;
}