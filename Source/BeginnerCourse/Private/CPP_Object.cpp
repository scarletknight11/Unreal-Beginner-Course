// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Object.h"

int UCPP_Object::GetOurPrivateInteger()
{
	return OurPrivateIntegerVariable;
}

void UCPP_Object::SetOurPrivateInteger(UPARAM(ref)int& NewValue)
{
	OurPrivateIntegerVariable = NewValue;
}
