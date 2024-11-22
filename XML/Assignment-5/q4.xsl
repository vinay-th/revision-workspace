<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="Students">
		<html>
			<body>
				<table border="1">
					<tr>
						<th>Name</th>
						<th>Address</th>
						<th>DOB</th>
						<th>Gender</th>
						<th>Mobile</th>
						<th>Result</th>
					</tr>
					<xsl:for-each select="Student">
						<xsl:sort select="Result" case-order="lower-first"/>
						<tr>
							<td><xsl:value-of select="Name"/></td>
							<td><xsl:value-of select="PersonalInfo/Address"/></td>
							<td><xsl:value-of select="PersonalInfo/Birthdate"/></td>
							<td><xsl:value-of select="PersonalInfo/Gender"/></td>
							<td><xsl:value-of select="PersonalInfo/MobileNo"/></td>
							<td><xsl:value-of select="Result"/></td>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>