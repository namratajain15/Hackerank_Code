def merge_the_tools(string, k):
    # your code goes here
    new_list = [string[i:i+k] for i in range(0 , len(string) , k)]
    for i in new_list:
        str1 = ""
        str1 = i
        str2 = ""
        for j in str1:
            if j not in str2:
                str2 = str2+j
        print(str2)
                
                     

if __name__ == '__main__':
    string, k = raw_input(), int(raw_input())
    merge_the_tools(string, k)
    
