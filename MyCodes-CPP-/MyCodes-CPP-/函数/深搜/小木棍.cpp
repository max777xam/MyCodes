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
    //������ƴ��k��Сľ������һ������һ�εı��,��һ��Сľ��ʣ��Ҫƴ�ĳ���
    if(k==m)//ֻҪƴ����m��������ɹ��ˣ���Ϊһ��ʼ%
    {
        f=1;
        return ;
    }
    int i,j;
    if(l==0)//������Сľ��ƴ���ˣ��Ϳ�ʼƴ��һ����ѡ����һ���ĵ�һ��
    {
        for(i=1; i<=n; i++)//�ҳ�����һ����Ϊ��ǰ���Сľ���ĵ�һ��
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
    //ûƴ����һ��������ƴ��Ѱ����һ��
    for(i=la+1; i<=n; i++)
    {
        if(used[i]==0&&a[i]<=l)
        {
            used[i]=1;
            dfs(k,i,l-a[i]);
            used[i]=0;
            j=i;
            while(i+1<=n&&a[j]==a[i+1])//�����ȾͲ��ò��ˣ�ӦΪ��һ��
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
    sort(a+1,a+1+n,cmp);//�Ƚ�a[]�Ӵ�С������ƴ������
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