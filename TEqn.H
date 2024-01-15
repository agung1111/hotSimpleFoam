{
    
    
    
    
    fvScalarMatrix TEqn
	(	
		
		
             	fvm::div(phi, T)
            -  fvm::laplacian(DT, T)
    	     
	);
	

    TEqn.relax();


    TEqn.solve();

  
}


/*    fvScalarMatrix TEqn
	(
    		fvm::laplacian(DT, T) == 0
	);

	TEqn.relax();

    	TEqn.solve();
    	
*/
    
/*    fvScalarMatrix TEqn
        (
              fvm::ddt(T)
            + fvm::div(phi, T)
            - fvm::laplacian(DT, T)
        );

    TEqn.relax();
    TEqn.solve();
    // @Nickolas: you are solving TEqn two times. The important one is
    // lower solution, since it has influence on the maxResidual.
    //    TEqn.solve(); // <----- removed

    //eqnResidual = TEqn.solve().initialResidual(); // <--- important
  //  maxResidual = max(eqnResidual, maxResidual);


//thermo.correct();

*/
