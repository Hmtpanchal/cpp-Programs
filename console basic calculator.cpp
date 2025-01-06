#include<iostream>

void addition ()
{
    int x,y;
        std::cout<<"Enter two value"<<std::endl;
        std::cin>>x>>y;
    std::cout<<"Sum is : "<<x+y<<std::endl;
}
void subtraction ()
{
    int x,y;
        std::cout<<"Enter two value"<<std::endl;
        std::cin>>x>>y;
    std::cout<<"Sutraction  is : "<<x-y<<std::endl;
}
void multiplication ()
{
    int x,y;
        std::cout<<"Enter two value"<<std::endl;
        std::cin>>x>>y;
    std::cout<<"Multiplication  is : "<<x*y<<std::endl;
}
void division ()
{
    float x,y;
        std::cout<<"Enter two value"<<std::endl;
        std::cin>>x>>y;
    //if(x>y)    
        std::cout<<"Division  is : "<<x/y<<std::endl;
    // else
    //     std::cout<<"Divided by large number"<<std::endl;
}


int main()
{
    //input Variable
    int ch;

    //input numbers
    while(true)
    {
        // int x,y;
        // std::cout<<"Enter two value"<<std::endl;
        // std::cin>>x>>y;
        //choise list
        std::cout<<"Enter your choise"<<std::endl;
        std::cout<<"1.Addition"<<std::endl;
        std::cout<<"2.Subtraction"<<std::endl;
        std::cout<<"3.Multiplition"<<std::endl;
        std::cout<<"4.Division"<<std::endl;
        std::cout<<"5.Exit"<<std::endl;

        //input choise
        std::cin>>ch;



        switch(ch)
        {
            case 1: addition();
                    break;
            case 2: subtraction();
                    break;
            case 3: multiplication();
                    break;
            case 4: division();
                    break;
            case 5: exit(0);

        }
    }

    return 0;
}
