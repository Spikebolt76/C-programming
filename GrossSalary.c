/* Enter basic salary of an employee and calculate Gross salary according to given
conditions:
- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic */

/* HRA = House Rent Allowence
   DA  = Dearness Allowence  */
#include <stdio.h>

int main()
{
    int base_sal, HRA, DA, gross_sal;     // identifier for 'basic salary'

    printf("Enter The Basic Salary: ");
    scanf("%d", &base_sal);

    if(base_sal >= 30000)
    {
        HRA = base_sal * 0.30;
        DA = base_sal * 0.95;
        gross_sal = base_sal + HRA + DA;
    }

    else if (base_sal >= 20000)
    {
        HRA = base_sal * 0.25;
        DA = base_sal * 0.90;
        gross_sal = base_sal + HRA + DA;
    }

    else if (base_sal >= 10000)
    {
        HRA = base_sal * 0.20;
        DA = base_sal * 0.80;
        gross_sal = base_sal + HRA + DA;
    }
    
    printf("The Gross Salary of the employee would be: %d", gross_sal);
    return 0;
}