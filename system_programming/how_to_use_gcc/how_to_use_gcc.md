# GCC 컴파일러를 사용하는 방법

## 1. 옵션을 사용하지 않는 경우
---
옵션을 사용하지 않고 gcc 명령을 내리면 컴파일후에 링킹 과정을 거쳐 a.out 결과물이 만들어진다.

1. 코드작성
```
// ex_gcc1.c
#include <stdio.h>

int main()
{
  printf("Hello Wolrd");
  return 0;
}
```

2. 컴파일
```
$ gcc ex_gcc1
```

3. 결과물

   a.out


## 2. 옵션을 사용하는 경우
---

### 1. -o

사용 방법 : gcc -o [원하는 파일 이름] [컴파일 할 파일]

예를 들어 hello.c 파일을 컴파일 하여 'hello'라는 실행 파일을 만들로 싶다면 gcc -o hello hello.c를 입력하여 실행 파일 'hello'를 만들 수 있다.

### 2. -c

사용 방법 : gcc -c [컴파일 할 파일]

-c 옵션은 파일을 컴파일 하고 확장자 이름이 .o인 목적 파일을 만든다.

실행이 가능하려면 링킹 과정을 거쳐야 실행 파일이 만들어진다.

1. 함수 코드 작성
```
// Addfunc.c
int Add(int a, int b)
{
  return a+b;
}
```

1-1. 목적 파일로 컴파일
```
$gcc -c Addfunc.c
```

2. 메인 함수 코드 작성
```
// main.c
#include <stdio.h>

int main()
{
  printf("result  : %d\n", Add(5,4));
  return 0;
}
```

3. 컴파일
```
$gcc -o AddResult main.c Addfunc.o
```
