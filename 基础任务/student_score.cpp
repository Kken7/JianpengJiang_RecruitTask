#include "score.h"
int main()
{
    int n = 3;
    Student* Stu = new Student[n];
    string Num;        // ѧ��  
    string Name;       // ����  
    float Chinese;       // ���Ŀγɼ�  
    float    English;       // Ӣ��γɼ�   
    float    Mathematics;   // ��ѧ�γɼ�
    // �����������  
    for (int i = 0; i < n; i++)
    {
        cin >> Num >> Name >> Chinese >> English >> Mathematics;
        // �����вι��캯��  
        Stu[i] = Student();
        Stu[i].modify(Num, Name, Chinese, English, Mathematics);
    }
    // ��ӡ����ѧ����Ϣ  
    for (int i = 0; i < n; i++)
    {
        Stu[i].print();
    }
    // �޸�ĳ��ѧ����Ϣ�����´�ӡ�������ѧ����Ϣ  
    Stu[1].modify("202216", "ѧ��K", 99, 98, 90);
    cout << "�޸ĺ�Ϊ��" << endl;
    for (int i = 0; i < n; i++)
    {
        Stu[i].print();
    }
    system("pause");
    return 0;
}