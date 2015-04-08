// Beginning to debug
// Set the symmetric part
for (j=1; j<6; ++j)
    for (k=0; k<j; ++k)
        dm[j][k] = dm[k][j];
tens4ds dmdg = tens4ds(dm);
std::cout << "dmdg:\n";
for(j=0; j<3; j++)
    for(k=0; k<3; k++)
        for(l=0; l<3; l++)
            for(n=0; n<3; n++)
                std::cout << dmdg(j, k, l, n) << "\t";
std::cout << std::endl;
            
// Print out tangent modulus value for debugging
tens4ds ccc = tens4ds(D);
std::cout << "Marker\n";
for(i=0; i<3; i++)
    for(j=0; j<3; j++)
        for(k=0; k<3; k++)
            for(l=0; l<3; l++)
                std::cout << ccc(i, j, k, l) << "\t";
std::cout << std::endl;

