#include <bits/stdc++.h>
using namespace std;
int num[101], maxn, minn, sum;
void dfs(int dep, int already, int need, int can)
{
    int i;
    if (dep == 0)
    {
        printf("%d", need);
        exit(0);
    }
    if (already == need)
    {
        dfs(dep - 1, 0, need, maxn);
        return;
    }
    for (i = can; i >= minn; i--)
        if (num[i] && i + already <= need)
        {
            num[i]--;
            dfs(dep, already + i, need, i);
            num[i]++;
            if (already == 0 || already + i == need)
                return;
        }
}
int main()
{
    int k, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        if (k <= 50)
        {
            sum += k;
            num[k]++;
            minn = min(k, minn);
            maxn = max(k, maxn);
        }
    }
    for (int i = maxn; i <= (sum / 2); i++)
        if (sum % i == 0)
            dfs(sum / i, 0, i, maxn);
    printf("%d", sum);
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int nn,n,a[62],sum,used[62],f,m,len;
bool cmp(int x,int y)
{
    return x>y;
}
void dfs(int k,int la,int l)
{
    //现在在拼第k根小木棍，这一段上面一段的编号,这一根小木棍剩余要拼的长度
    if(k==m)//只要拼到了m根，就算成功了，因为一开始%
    {
        f=1;
        return ;
    }
    int i,j;
    if(l==0)//如果这根小木棍拼完了，就开始拼下一根，选好下一根的第一段
    {
        for(i=1; i<=n; i++)//找出最大的一根作为当前这根小木棍的第一段
        {
            if(used[i]==0)
            {
                used[i]=1;
                break;
            }
        }
            dfs(k+1,i,len-a[i]);
            used[i]=0;
    }
    //没拼完这一根，继续拼，寻找下一段
    for(i=la+1; i<=n; i++)
    {
        if(used[i]==0&&a[i]<=l)
        {
            used[i]=1;
            dfs(k,i,l-a[i]);
            used[i]=0;
            j=i;
            while(i+1<=n&&a[j]==a[i+1])//如果相等就不用查了，应为都一样
                i++;
        }
    }
}
int main()
{
    int t;
    scanf("%d",&nn);
    for(int i=1; i<=nn; i++)
    {
        scanf("%d",&t);
        if(t<=50)
        {
            a[++n]=t;
            sum+=t;
        }
    }
    sort(a+1,a+1+n,cmp);//先将a[]从大到小排序，先拼掉最大的
    for(i=a[1]; i<sum; i++)
    {
        if(sum%i==0)
        {
            used[1]=1;
            for(int j=2; j<=n; j++)
                used[j]=0;
            len=i;
            m=sum/i;
            f=0;
            dfs(1,1,i-a[1]);
            if(f)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    printf("%d",sum);
    return 0;
}*/