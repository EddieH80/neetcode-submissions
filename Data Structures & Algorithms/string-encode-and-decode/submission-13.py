class Solution:

    def encode(self, strs: List[str]) -> str:
        out = ""
        for s in strs:
            out += str(len(s)) + "!" + s
        return out

    def decode(self, s: str) -> List[str]:
        out = []
        i = 0
        while i < len(s):
            j = i
            while (s[j] != "!"):
                j += 1
            s_length = int(s[i:j])
            j += 1
            out.append(s[j:j + s_length])
            i = j + s_length
        return out
