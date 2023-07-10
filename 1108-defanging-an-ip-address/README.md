<h2><a href="https://leetcode.com/problems/defanging-an-ip-address/">1108. Defanging an IP Address</a></h2><h3>Easy</h3><hr><div><p>Given a valid (IPv4) IP <code>address</code>, return a defanged version of that IP address.</p>

<p>A <em>defanged&nbsp;IP address</em>&nbsp;replaces every period <code>"."</code> with <code>"[.]"</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> address = "1.1.1.1"
<strong>Output:</strong> "1[.]1[.]1[.]1"
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> address = "255.100.50.0"
<strong>Output:</strong> "255[.]100[.]50[.]0"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The given <code>address</code> is a valid IPv4 address.</li>
</ul></div>

---

## Review

#### Most Simple Code
```go
import "strings"
func defangIPaddr(address string) string {
    return strings.Replace(address, ".", "[.]", -1)
}
```
<br>

#### Buffer Using Code
```go
func defangIPaddr(address string) string {
	var b bytes.Buffer
	for _, c := range address {
		if c == '.' {
			b.WriteString("[.]")
		} else {
			b.WriteRune(c)
		}
	}
	return b.String()
}
```

### 배운점 : 처음 사용하는 언어 Go에 대한 이해 <br>
### 느낀점 : 여러 언어에 대한 익숙함이 중요하다.
