<h2>185. Department Top Three Salaries</h2><h3>Hard</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Employee</code></p>

<pre>+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| Id           | int     |
| Name         | varchar |
| Salary       | int     |
| DepartmentId | int     |
+--------------+---------+
Id is the primary key for this table.
Each row contains the ID, name, salary, and department of one employee.
</pre>

<p>&nbsp;</p>

<p>Table: <code>Department</code></p>

<pre>+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| Id          | int     |
| Name        | varchar |
+-------------+---------+
Id is the primary key for this table.
Each row contains the ID and the name of one department.
</pre>

<p>&nbsp;</p>

<p>A company's executives are interested in seeing who earns the most money in each of the company's departments. <gistnote class="gistnote-highlight" highlightid="aca9a954-753c-4057-8333-1662c13becfb" colornum="3" style="background-color: rgb(255, 251, 120);" id="aca9a954-753c-4057-8333-1662c13becfb">A </gistnote><strong><gistnote class="gistnote-highlight" highlightid="aca9a954-753c-4057-8333-1662c13becfb" colornum="3" style="background-color: rgb(255, 251, 120);">high earner</gistnote></strong><gistnote class="gistnote-highlight" highlightid="aca9a954-753c-4057-8333-1662c13becfb" colornum="3" style="background-color: rgb(255, 251, 120);"> in a department is an employee who has a salary in the </gistnote><strong><gistnote class="gistnote-highlight" highlightid="aca9a954-753c-4057-8333-1662c13becfb" colornum="3" style="background-color: rgb(255, 251, 120);">top three unique</gistnote></strong><gistnote class="gistnote-highlight" highlightid="aca9a954-753c-4057-8333-1662c13becfb" colornum="3" style="background-color: rgb(255, 251, 120);"> salaries for that department</gistnote>.</p>

<p>Write an <gistnote class="gistnote-highlight" highlightid="c0712881-8f25-4686-8256-0580d599c775" colornum="3" style="background-color: rgb(255, 251, 120);" id="c0712881-8f25-4686-8256-0580d599c775">SQL query to find the employees who are </gistnote><strong><gistnote class="gistnote-highlight" highlightid="c0712881-8f25-4686-8256-0580d599c775" colornum="3" style="background-color: rgb(255, 251, 120);">high earners</gistnote></strong><gistnote class="gistnote-highlight" highlightid="c0712881-8f25-4686-8256-0580d599c775" colornum="3" style="background-color: rgb(255, 251, 120);"> in each of the departments.</gistnote></p>

<p>Return the result table <strong>in any order</strong>.</p>

<p>The query result format is in the following example:</p>

<p>&nbsp;</p>

<pre>Employee table:
+----+-------+--------+--------------+
| Id | Name  | Salary | DepartmentId |
+----+-------+--------+--------------+
| 1  | Joe   | 85000  | 1            |
| 2  | Henry | 80000  | 2            |
| 3  | Sam   | 60000  | 2            |
| 4  | Max   | 90000  | 1            |
| 5  | Janet | 69000  | 1            |
| 6  | Randy | 85000  | 1            |
| 7  | Will  | 70000  | 1            |
+----+-------+--------+--------------+

Department table:
+----+-------+
| Id | Name  |
+----+-------+
| 1  | IT    |
| 2  | Sales |
+----+-------+

Result table:
+------------+----------+--------+
| Department | Employee | Salary |
+------------+----------+--------+
| IT         | Max      | 90000  |
| IT         | Joe      | 85000  |
| IT         | Randy    | 85000  |
| IT         | Will     | 70000  |
| Sales      | Henry    | 80000  |
| Sales      | Sam      | 60000  |
+------------+----------+--------+

In the IT department:
- Max earns the highest unique salary
- Both Randy and Joe earn the second-highest unique salary
- Will earns the third-highest unique salary

In the Sales department:
- Henry earns the highest salary
- Sam earns the second-highest salary
- There is no third-highest salary as there are only two employees</pre>
</div>