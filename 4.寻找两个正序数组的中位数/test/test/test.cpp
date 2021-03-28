#define _CRT_SECURE_NO_WARNINGS 1

/*4. Ѱ�����������������λ��
����������С�ֱ�Ϊ m �� n �����򣨴�С�������� nums1 �� nums2�������ҳ���������������������� ��λ�� ��



ʾ�� 1��

���룺nums1 = [1, 3], nums2 = [2]
�����2.00000
���ͣ��ϲ����� = [1, 2, 3] ����λ�� 2
ʾ�� 2��

���룺nums1 = [1, 2], nums2 = [3, 4]
�����2.50000
���ͣ��ϲ����� = [1, 2, 3, 4] ����λ��(2 + 3) / 2 = 2.5
ʾ�� 3��

���룺nums1 = [0, 0], nums2 = [0, 0]
�����0.00000
ʾ�� 4��

���룺nums1 = [], nums2 = [1]
�����1.00000
ʾ�� 5��

���룺nums1 = [2], nums2 = []
�����2.00000


��ʾ��

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
- 106 <= nums1[i], nums2[i] <= 106*/

//�ݹ鴦��
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int tot = nums1.size() + nums2.size();
		if (tot % 2 == 0)
		{
			int left = find(nums1, 0, nums2, 0, tot / 2);
			int right = find(nums1, 0, nums2, 0, tot / 2 + 1);
			return (left + right) / 2.0;
		}
		else
		{
			return find(nums1, 0, nums2, 0, tot / 2 + 1);
		}
	}
	int find(vector<int>&nums1, int i, vector<int>&nums2, int j, int k)
	{
		if (nums1.size() - i>nums2.size() - j) return find(nums2, j, nums1, i, k);
		if (k == 1){
			if (nums1.size() == i)return nums2[j];
			else return min(nums1[i], nums2[j]);
		}
		if (nums1.size() == i)return nums2[j + k - 1];
		int si = min((int)nums1.size(), i + k / 2), sj = j + k / 2;
		if (nums1[si - 1]>nums2[sj - 1])
			return find(nums1, i, nums2, sj, k - (sj - j));
		else
			return find(nums1, si, nums2, j, k - (si - i));

	}
};