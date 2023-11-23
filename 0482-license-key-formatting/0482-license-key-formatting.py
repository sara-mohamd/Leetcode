class Solution(object):
    def licenseKeyFormatting(self, s, k):

        temp = ''.join([x for x in s if x.isalnum()]).upper()
        num_groups = len(temp) // k
        first_group_len = len(temp) % k
        
        groups = [temp[:first_group_len]] if first_group_len > 0 else []
        groups += [temp[i:i+k] for i in range(first_group_len, len(temp), k)]
        
        return '-'.join(groups)

        # temp = ''.join([x for x in s if x.isalnum()]).upper()
        # if len(temp)% 2 != 0 and len(s) > k:
        #     sep = temp[0:k - 1] + '-'
        #     sep += '-'.join(temp[i:i+k] for i in range(k - 1, len(temp), k))
        # else:
        #     sep = '-'.join(temp[i:i+k] for i in range(0, len(temp), k))
        # return sep
        # # temp = ''.join([x for x in s if x.isalnum()]).upper()