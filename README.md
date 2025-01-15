# cpp07
cpp의 템플릿에 대해 배우는 과제입니다.

---
목차
1. 과제를 통해 알게 된 것  
2. 평가 피드백
---

1. 과제를 통해 알게 된 것

1-1) 템플릿의 개념과 사용법

기존까지는 함수의 매개변수의 자료형이 아닌 다른 자료형이 들어오면 컴파일 타임에 에러가 발생했습니다. 그러나, 템플릿을 사용하면 타입에 상관없이 코드를 작성할 수 있다는 것이 가장 큰 특징입니다.  
~~~ c++
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// 사용
int maxInt = max(10, 20);        // T는 int로 구체화
double maxDouble = max(3.14, 2.72);  // T는 double로 구체화
~~~

1-2) STL에 대한 새로운 관점에서의 이해  
평소에 STL 라이브러리를 사용할 때는 자료구조의 관점에서 주로 생각했습니다. 그래서 STL 라이브러리 자체가 CS 자료구조를 실체적으로 구현한 결과물이라고만 생각하고 있었는데 Standard Template Library에서 Template의 의미를 알게 되어 좀더 근본적 수준에서 STL을 이해하는 계기가 되었습니다.  
또한, 실제로 cppreference.com에서도 STL에 대해 설명할 때 Template 관점에서의 설명을 가장 초입에 하는 것을 확인할 수 있었습니다.  
<img width="653" alt="image" src="https://github.com/user-attachments/assets/01afb213-c6bd-4adc-9303-193c99307e7d" />

2. 평가 피드백
<img width="839" alt="image" src="https://github.com/user-attachments/assets/1816b429-bac1-4751-ac58-7213601495e1" />
