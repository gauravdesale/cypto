def ksa(string target, string key):
    intOf = target.len()
    intOf2 = key.len()
    targetChars = list(target)
    keyChars = list(key)
    for i in range 256:
        targetChars[i] = i
    for i in range 256:
        j = (j + targetChars[i] + key[i % intOf]) % 256
        t = targetChars[i]
        targetChars[i] = targetChars[j]
        targetChars[j] = t


        
