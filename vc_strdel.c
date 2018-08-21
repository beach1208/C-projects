//Juan Aguas

void vc_strdel(char **as)
{
    free(as);
    as[0] = '\0';
}

