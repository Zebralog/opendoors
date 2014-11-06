http://drupal.org/project/registration_role
http://agaricdesign.com/project/registration_role

Registration role lets an administrator select a role to automatically assign to new users.  The selected role will be assigned to new registrants.NOTE: Be sure this role does not have any privileges that should not be given out to just anyone who registers.  Because we shouldn't give away any real abilities above an authenticated user by default, this module really has only two known useful applications:

1.  If you want to assign all people who sign up after (or before) a certain time to a role to distinguish them-- simply set the roles as appropriate at the appropriate time.

2.  If you have multiple sites with a shared user database table (for instance with the single signon module), and you want to assign users a role based on the site at which they register.

Drupal roles exist primarily for access permissions, but modules such as mass_contact also use roles act on a group users.Registration role is based on a code snippet by Pauly Jura: http://drupal.org/node/28379#comment-132430  (It actually does less than the snippet, but it is a module and has a settings administration page!)
For a module that lets the user choose their role on registration, see http://drupal.org/project/rolesignup
This is a very lightweight module which does not install any database tables.  Created and maintained by http://AgaricDesign.com/
Agaric Design Collective and Benjamin Melançon.

In memory, my father John Melançon
http://melanconent.com/john-melancon-life
