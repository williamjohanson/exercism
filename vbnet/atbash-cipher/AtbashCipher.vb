Public Module Atbash

    Public Function Encode(arg As String) As String
        Return GetString(arg, encoding:=True)
    End Function

    Public Function Decode(arg As String) As String
        Return GetString(arg, encoding:=False)
    End Function

    Public Function GetString(arg As String, encoding As Boolean) As String
        ' Encoding True Indicates Encoding Of The String (Add Spaces)
        Dim count As Integer = arg.Count()
        Dim result As String = ""
        Dim currentChar As Char
        Dim spacing As Integer = 5

        For i As Integer = 0 To count - 1
            currentChar = arg(i)

            If Char.IsLetter(currentChar) Then
                result += GetEncodedValue(Char.ToLower(currentChar))
            End If

            If Char.IsNumber(currentChar) Then
                result += currentChar
            End If

            If encoding And result.Count() Mod spacing = 0 Then
                result += " "
                spacing += 6
            End If
        Next

        Return result.TrimEnd()
    End Function

    Private Function GetEncodedValue(c As Char) As Char
        Dim charAscii As Integer = Asc(c)
        Dim a_ascii As Integer = Asc("a"c)
        Dim z_ascii As Integer = Asc("z"c)
        ' If Greater Than Midway Through The Alphabet We Add Its Position From The End To The Start
        If (charAscii - a_ascii) > 13 Then
            Return Chr((z_ascii - charAscii) + a_ascii)
        End If

        ' If Less Than Midway Through The Alphabet We Add Its Position From The Start Before The End
        Return Chr(z_ascii - (charAscii - a_ascii))
    End Function

End Module