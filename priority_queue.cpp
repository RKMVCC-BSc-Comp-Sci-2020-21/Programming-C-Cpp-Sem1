#include <iostream>
#include <queue>
using namespace std;
int main()
{
priority_queue<int> p;

p.push(1);
p.push(2);
p.push(3);
p.push(4);

while (!p.empty())
{
std::cout << p.top() << std::endl;
p.pop();
}

return 0;
}

