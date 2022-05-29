class Solution:
    def discountPrices(self, sentence: str, discount: int) -> str:
        res=[]
        words = sentence.split()
        for word in words:
            if word[0]!="$" or word[1:].isnumeric()==False:
                res.append(word)
            else:
                res.append(word[0]+"{:.2f}".format(int(word[1:])*(1-discount/100)))
        return " ".join(res)
        