#include <iostream>
#include<cmath>
using namespace std;

bool so_nguyen_to(int a); //khai bao ham con
 main()
{
    int N,i;


    do /*cho vong lap de kiem tra so do phai la so tu nhien hay khong
        neu khong thi nhap lại*/
    {
       cout<<" Nhap vao so N = ";
        cin>>N;
    }
    while(N <= 0);
    cout<<" Cac so nguyen chinh phuong nho hon  :"<< N<<endl;
    for(i = 1; i <= N; i++)
    {
        if(so_nguyen_to(i))  //gọi hàm để kiểm ra
            cout<<i<<" ";
    }

}

bool so_nguyen_to(int N)
{
        for (int j=1;j<=sqrt(N);j++)  // hàm kiểm tra số chính phương
            if( j*j==N)
        return 1;

        return 0;

}
