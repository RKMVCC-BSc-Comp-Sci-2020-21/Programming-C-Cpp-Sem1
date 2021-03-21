#include &lt;stdio.h&gt;
int main() {
int r, c;
printf(&quot;Enter rows and columns: &quot;);
scanf(&quot;%d %d&quot;, &amp;r, &amp;c);
int a[r][c], t[r][c];
printf(&quot;\nEnter matrix elements:\n&quot;);
for (int i = 0; i &lt; r; ++i){
for (int j = 0; j &lt; c; ++j)
scanf(&quot;%d&quot;, &amp;a[i][j]);
}
for (int i = 0; i &lt; r; ++i){
for (int j = 0; j &lt; c; ++j)
t[j][i] = a[i][j];
}
printf(&quot;\nTranspose of the matrix:\n&quot;);
for (int i = 0; i &lt; r; ++i){
for (int j = 0; j &lt; c; ++j)
printf(&quot;%d &quot;, t[i][j]);
printf(&quot;\n&quot;);
}
return 0;
}
