#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    int len;
    int Maxcnt = 0;
    int N;
    string str;
    string ans, s;
    cin >> N >> str;
    len = str.size();
    for(int k = len; k >= N; --k){          //�Ӵ�����
        for(int i = 0; i < len - k; ++i){   //�ָ������Ӵ�
            int cnt = 0;
            string temp;
            s.assign(str, i, k);
            for(int j = 0; j < len - k; j++){   //���ҷ����Ӵ�������
                temp.assign(str, j, k);
                if(s == temp)
                    cnt++;
            }

            if(Maxcnt < cnt){
                Maxcnt = cnt;
                ans = s;
            }
        }
    }
    cout << ans;
    return 0;
}
