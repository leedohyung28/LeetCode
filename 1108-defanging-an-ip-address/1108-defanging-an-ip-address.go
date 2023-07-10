func defangIPaddr(address string) string {
    for r,i := range address {
        if i == 46 {
            address = address[:r] + "[.]" + defangIPaddr(address[r+1:])
            return address
        }
    }
    return address
}