#include<iostream>
#include<queue>

using namespace std;

    struct student{
        int score;
        string name;
        int student_number;

        //重载<运算符，用于优先级比较，以成绩排名
        bool operator<(const student& stu) const {
            return this->score < stu.score;//大顶堆
        }

        //构造函数
        student(int sco, string na, int sn):score(sco), name(na), student_number(sn){}
    };

    //自定义比较函数
    struct student_compare_score_greater{
        bool operator() (const student& stu_a, const student& stu_b){
            return stu_a.score > stu_b.score;//小顶堆
        }
    };

int main(){

    student s1(89, "wang", 1001001);
	student s2(76, "Li", 1001721);
	student s3(100, "Zhao", 1001321);

	priority_queue<student> p5;
	p5.push(s1);
	p5.push(s2);
	p5.push(s3);

	cout << "p5 list 大顶堆(student): " << endl << endl;
	while (p5.size())
	{
		cout << p5.top().name << " " << p5.top().score << " " << p5.top().student_number << endl;;
		p5.pop();
	}
	cout << endl;

	// 改为成绩由低到高
	priority_queue<student, vector<student>, student_compare_score_greater> p6;
	p6.push(s1);
	p6.push(s2);
	p6.push(s3);

	cout << "p6 list 小顶堆(student): " << endl;
	while (p6.size())
	{
		cout << p6.top().name << "  " << p6.top().score << "  " << p6.top().student_number << endl;;
		p6.pop();
	}
	cout << endl;
}

int main1(){

    //升序队列，小顶堆
    priority_queue<int, vector<int>, greater<int>> up_q;
    
    //降序队列，大顶堆
    priority_queue<int, vector<int>, less<int>> down_q;
    //对于基础类型，默认是大顶堆
    priority_queue<int> default_q;
    //等同于priority_queue<int, vector<int>, less<int>> down_q

    //greater 和 less 是std实现的两个仿函数

    int x;
    //和队列的操作基本相同
    up_q.top();     //访问队头元素
    up_q.empty();   //队列是否为空
    up_q.size();    //返回队列内元素个数
    up_q.push(x);    //插入元素到队尾 (并排序)
    up_q.emplace(); //原地构造一个元素并插入队列
    up_q.pop();     //弹出队头元素
    //up_q.swap();    //交换内容
}