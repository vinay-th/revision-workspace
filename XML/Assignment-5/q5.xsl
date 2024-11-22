<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="Students">
		<html>
			<body>
				<table border="1">
					<tr>
						<th>RollNo</th>
						<th>Name</th>
						<th>Marks</th>
						<th>Result</th>
						<th>Rank</th>
					</tr>
					<xsl:for-each select="Student">
						<tr>
							<td><xsl:value-of select="Roll_no"/></td>
							<td><xsl:value-of select="Name"/></td>
							<td><xsl:value-of select="Marks"/></td>
							<xsl:choose>
								<xsl:when test="Marks &gt; 70"><td>dist</td></xsl:when>
								<xsl:when test="Marks &gt; 60 and Marks &lt; 70"><td>first</td></xsl:when>
								<xsl:when test="Marks &gt; 40 and Marks &lt; 60"><td>second</td></xsl:when>
								<xsl:when test="Marks &lt; 40"><td style="color: red">FAIL</td></xsl:when>
							</xsl:choose>
							<td><xsl:value-of select="Rank"/></td>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>