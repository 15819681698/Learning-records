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
    for(int k = len; k >= N; --k){          //子串长度
        for(int i = 0; i < len - k; ++i){   //分割若干子串
            int cnt = 0;
            string temp;
            s.assign(str, i, k);
            for(int j = 0; j < len - k; j++){   //查找符合子串的数量
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
