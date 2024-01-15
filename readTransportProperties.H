Info<< "\nReading transportProperties\n" << endl;
    IOdictionary transportProperties
    (
        IOobject
        (
            "transportProperties",
            runTime.constant(),
            mesh,
            IOobject::MUST_READ_IF_MODIFIED,
            IOobject::NO_WRITE,
            false
        )
    );


dimensionedScalar nu
(
    transportProperties.lookup("nu")
);
    
dimensionedScalar DT
(
    transportProperties.lookup("DT")
);

